class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {

    // just DP
    // int n = nums.size();
    // if (n == 0) {
    //     return 0;
    // }
    // vector<int> L(n, 1);
    // for (int i = 1; i < n; i++) {
    //     for (int j = 0; j < i; j++) {
    //         if (nums[j] < nums[i] && L[i] < 1 + L[j]) {
    //             L[i] = 1 + L[j];
    //         }
    //     }
    // }
    // return *max_element(L.begin(), L.end());

    // DP+BS
    std::vector<int> dp;
    for (int num : nums) {
        auto it = std::lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end()) {
            dp.push_back(num);
        } else {
            *it = num;
        }
    }
    return dp.size();
}
};