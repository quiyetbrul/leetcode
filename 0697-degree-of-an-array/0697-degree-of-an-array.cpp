class Solution {
public:
    int findShortestSubArray(std::vector<int>& nums) {
        std::unordered_map<int, int> m_nums;
        std::unordered_map<int, int> first_occurrence;

        int degree = 0;

        // Calculate the frequency of each number and track the first occurrence
        for (int i = 0; i < nums.size(); ++i) {
            if (first_occurrence.find(nums[i]) == first_occurrence.end()) {
                first_occurrence[nums[i]] = i;
            }
            m_nums[nums[i]]++;
            degree = std::max(degree, m_nums[nums[i]]);
        }

        int min_length = nums.size();
        // Find the shortest subarray with the same degree
        for (const auto& [num, freq] : m_nums) {
            if (freq == degree) {
                int length = nums.size() - first_occurrence[num];
                for (int j = nums.size() - 1; j >= 0; --j) {
                    if (nums[j] == num) {
                        length = j - first_occurrence[num] + 1;
                        break;
                    }
                }
                min_length = std::min(min_length, length);
            }
        }

        return min_length;
    }
};