class Solution {
public:
    std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> result;

        std::unordered_map<int, int> mp1;
        for (const int num : nums1) {
            mp1[num]++;
        }

        for (const int num : nums2) {
            if (mp1.find(num) != mp1.end() && mp1[num] > 0) {
                result.push_back(num);
                mp1[num]--;
            }
        }

        return result;
    }
};
