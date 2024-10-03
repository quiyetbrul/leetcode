class Solution {
public:
    std::vector<int> resultArray(std::vector<int>& nums) {
        std::vector<int> arr1(1,nums[0]);
        std::vector<int> arr2(1,nums[1]);
        int n = nums.size();

        // Distribute the remaining elements
        for (int i = 2; i < n; ++i) {
            if (arr1.back() > arr2.back()) {
                arr1.push_back(nums[i]);
            } else {
                arr2.push_back(nums[i]);
            }
        }

        // Concatenate arr1 and arr2 to form the result
        std::vector<int> result = arr1;
        result.insert(result.end(), arr2.begin(), arr2.end());

        return result;
    }
};