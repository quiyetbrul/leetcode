class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        std::unordered_map<int, int> countMap;
        std::unordered_set<int> uniqueNums1(nums1.begin(), nums1.end());
        std::unordered_set<int> uniqueNums2(nums2.begin(), nums2.end());
        std::unordered_set<int> uniqueNums3(nums3.begin(), nums3.end());

        for (int num : uniqueNums1) {
            countMap[num]++;
        }
        for (int num : uniqueNums2) {
            countMap[num]++;
        }
        for (int num : uniqueNums3) {
            countMap[num]++;
        }

        std::vector<int> result;
        for (const auto& entry : countMap) {
            if (entry.second >= 2) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};