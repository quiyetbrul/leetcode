class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        if(size == 0) return -1;
        
        int mid = size / 2;
        if(nums[mid] == target) return mid;
        
        vector<int> newNums;
        if (target < nums[mid]) {
            newNums.assign(nums.begin(), nums.begin() + mid);
            int result = search(newNums, target);
            if (result != -1) return result;
        } else {
            newNums.assign(nums.begin() + mid + 1, nums.end());
            int result = search(newNums, target);
            if (result != -1) return mid + 1 + result;
        }
        return -1;
        
        //// NON RECURSION
        
//         int left = 0;
//         int right = nums.size() - 1;
//         while (left <= right) {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] == target) {
//                 return mid;
//             } else if (nums[mid] < target) {
//                 left = mid + 1;
//             } else {
//                 right = mid - 1;
//             }
//         }
//         return -1;
        
    }
};