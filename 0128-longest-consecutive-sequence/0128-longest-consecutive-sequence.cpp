class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();

        std::unordered_set<int> numsSet(nums.begin(), nums.end());

        int maxLength = 0;
        int currentNum = 0;
        int currentLength = 0;

        // since vector was turned into a set,
        // we can just check (either increasingly/decreasingly)
        // if the next/previous integer is present
        for(const auto& i : numsSet){
            currentNum = i;
            if (!numsSet.contains(i - 1)) {
                currentLength = 1;
                while (numsSet.contains(++currentNum))
                    currentLength++;
            }

            maxLength = std::max(currentLength, maxLength);
        }
        return maxLength;
    }
};