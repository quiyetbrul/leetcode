class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();

        if (n == 0)
            return {-1, -1};

        int left = findLeftIndex(nums, target);
        int right = findRightIndex(nums, target);

        return {left, right};
    }

private:
    int findLeftIndex(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        int index = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target) {
                    index = mid;
                }
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return index;
    }

    int findRightIndex(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        int index = -1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                if (nums[mid] == target) {
                    index = mid;
                }
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return index;
    }
};
