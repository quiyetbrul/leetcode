class Solution {
public:
    int findGCD(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int low = nums[0];
        int hi = nums[nums.size() - 1];

        int result = 1;

        for(int i = 1; i <= hi; i++){
            if(low % i == 0 && hi % i == 0){
                result = std::max(result, i);
            }
        }

        return result; 
    }
};