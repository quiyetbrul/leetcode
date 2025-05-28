class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0];
        int count = 1;

        for(const auto &i : nums){
            if(majority == i){
                count++;
            }else{
                count--;
            }

            if(count <= 0){
                count = 1;
                majority = i;
            }
        }

        return majority;
    }
};