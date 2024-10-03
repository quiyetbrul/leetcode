class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        std::vector<std::vector<int>> result;
        int n1 = 0;
        int n2 = 0;

        while (n1 < nums1.size() && n2 < nums2.size()) {
            if (nums1[n1][0] == nums2[n2][0]) {
                result.push_back({nums1[n1][0], nums1[n1][1] + nums2[n2][1]});
                n1++;
                n2++;
            } else if (nums1[n1][0] < nums2[n2][0]) {
                result.push_back({nums1[n1][0], nums1[n1][1]});
                n1++;
            } else {
                result.push_back({nums2[n2][0], nums2[n2][1]});
                n2++;
            }
        }

        // Add remaining elements from nums1
        while (n1 < nums1.size()) {
            result.push_back({nums1[n1][0], nums1[n1][1]});
            n1++;
        }

        // Add remaining elements from nums2
        while (n2 < nums2.size()) {
            result.push_back({nums2[n2][0], nums2[n2][1]});
            n2++;
        }

        return result;
    }
};