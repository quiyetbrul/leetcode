class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left <= right){
            int mid = (left+right)/2;
            if(target==nums[mid]) return mid;
            
            // left sorted portion
            if(nums[mid] >= nums[left])
                if(target > nums[mid] || target < nums[left]) left = mid+1;
                else right = mid-1;
            // right sorted portion
            else
                if(target < nums[mid] || target > nums[right]) right = mid-1;
                else left = mid+1;
        }
        return -1;
    }
};