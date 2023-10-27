class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(nums.size()<=1) return nums[0];
        int sum = 0;
        int max_val = INT_MIN;
        for(int i = 0; i < k; i++)
            sum+=nums[i];
        max_val = sum;
        for(int i = 0; i + k < nums.size(); ++i){
            sum = sum + nums[i+k] - nums[i];
            max_val = std::max(max_val,sum);
        }
        
        return static_cast<double>(max_val) / k;
    }
};