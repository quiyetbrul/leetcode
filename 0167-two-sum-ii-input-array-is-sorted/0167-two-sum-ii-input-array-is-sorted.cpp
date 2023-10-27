class Solution {
public:
    std::vector<int> twoSum(std::vector<int> array, int targetSum) {
        int left = 0;
        int right = array.size() - 1;
        int currentSum = 0;

        while (left < right) {
            currentSum = array[left] + array[right];
            if (currentSum == targetSum) {
                return {left + 1, right + 1};
            } else if (currentSum < targetSum) {
                ++left;
            } else if (currentSum > targetSum) {
                --right;
            }
        }

        return {};

        // OR
        /*
        std::set<int> s;

        for (int i = 0; i < array.size(); i++) {
            int y = targetSum - array[i];
            if (s.find(y) != s.end()) {
                // We found the array that add up to the target.
                // Return their indices (1-indexed).
                for (int j = 0; j < array.size(); j++) {
                    if (array[j] == y && j != i) {
                        return {j + 1, i + 1};
                    }
                }
            }
            s.insert(array[i]);
        }

        // Return an empty vector if no solution is found.
        return {};
        */
    }
};