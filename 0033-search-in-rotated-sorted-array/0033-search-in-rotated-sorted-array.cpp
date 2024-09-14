class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[left] <= nums[mid]) { // Left part is sorted
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else { // Right part is sorted
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }

    int search2(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        int minIndex;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right])
                minIndex = mid + 1;
            else
                minIndex = mid;
        }

        if (minIndex == 0) {
            left = 0;
            right = n - 1;
        } else if (nums[minIndex] >= nums[0] && target <= nums[minIndex - 1]) {
            left = 0;
            right = minIndex - 1;
        } else {
            left = minIndex;
            right = n - 1;
        }

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return target;
            else if (nums[mid] > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
};