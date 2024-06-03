class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        // linear sol
        
        int count = 1;
        int answer = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if (nums[i] == answer) count++;
            else count --;
            if(count == 0){
                answer = nums[i];
                count = 1;
            }
        }
        return answer;
        
        
        //// nlogn
        // std::sort(nums.begin(), nums.end());
        // int n = nums.size();
        // return nums[n/2];
    }
};