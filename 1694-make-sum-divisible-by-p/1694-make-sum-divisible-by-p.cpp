class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long totalSum = std::accumulate(nums.begin(), nums.end(), 0L);
        int rem = totalSum % p;
        if (rem == 0)
            return 0;

        unordered_map<int, int> prefixMod;
        prefixMod[0] = -1;
        long prefixSum = 0;
        int minLength = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            int currentMod = prefixSum % p;
            int targetMod = (currentMod - rem + p) % p;

            if (prefixMod.contains(targetMod))
                minLength = std::min(minLength, i - prefixMod[targetMod]);

            prefixMod[currentMod] = i;
        }

        return minLength == nums.size() ? -1 : minLength;
    }
};