class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN, run = 0;
        for(auto i:nums){
            run = max(i, i+run);
            sum = max(sum, run);
        }
        
        
        return sum;
    }
};