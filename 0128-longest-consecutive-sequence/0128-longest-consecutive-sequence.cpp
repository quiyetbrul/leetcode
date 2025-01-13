class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> us(nums.begin(), nums.end());
        int result = 0;
        int currentNum = 0;
        int counter = 0;

        for(const auto& n : us){
            currentNum = n;
            if(!us.contains(currentNum-1)){
                counter = 0;
                while(us.contains(currentNum++)){
                    counter++;
                }
                result = std::max(result, counter);
            }
        }

        return result;
    }
};