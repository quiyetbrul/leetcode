class Solution {
public:
    int findMin(vector<int>& nums) {
        int result = nums[0];
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right){

            // check if the array is already sorted
            if (nums[left] < nums[right]){
                result = std::min(result, nums[left]);
                break;
            }

            // use mid element as potential min val
            int mid = (left+right)/2;
            result = std::min(result, nums[mid]);

            // binary search
            if (nums[mid] >= nums[left]) left = mid + 1;
            else right = mid - 1;
        }
        return result;

        //// without using binary search
        // for (int i = 0; i < nums.size() - 1; i++)
        //     if (nums[i] > nums[i+1]) return nums[i+1];
        // return nums[0];
    }
};