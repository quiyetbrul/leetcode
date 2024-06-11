class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int answer = nums[0];
        
        // For each element, it increments a counter
        // if the element equals the current majority element, or decrements it otherwise.
        // If the counter hits zero,
        // the current element becomes the new candidate and the counter resets to 1.
        for(int i = 1; i < nums.size(); i++){
            if (nums[i] == answer) count++;
            else count --;
            if(count == 0){
                answer = nums[i];
                count = 1;
            }
        }
        return answer;
    }
};