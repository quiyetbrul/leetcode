class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // nums.erase(std::remove(nums.begin(), nums.end(), val),nums.end());
        // return nums.size();

        //// OR | SLOW AF
        // int left = 0;
        // int right = nums.size() - 1;
        // while(left <= right){
            // if (nums[left] == val){
            //     if(nums[right] != val)
            //         nums[left] = nums[right];
            //     nums.pop_back();
            //     right--;
            // }
        //     else left++;
        // }
        // return left;

        //// OR
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[count] = nums[i];
                count++; // "wanted" value size
            }
        }
        // AFTER ALGO RUNS
        // {1,1,1,1,2}
        // val = 2
        // {1,1,1,1, NULL}
        nums.resize(count); // it will cut off all the elements after "index=count"
        return count;
    }
};