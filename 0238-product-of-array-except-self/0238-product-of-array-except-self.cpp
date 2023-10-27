class Solution {
public:
std::vector<int> productExceptSelf(std::vector<int> nums) {
    int n = nums.size();
    std::vector<int> results(n, 1);
    
    int leftProduct = 1;
    for (int i = 0; i < n; i++) {
        results[i] *= leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        results[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return results;
    
    //// OR

//     int n = nums.size();
//     std::vector<int> results(n, 1);
//     int res = 1;

//     for (int i = 0, id = 0; id < n; i++) {
//         if (i == id) {
//             i++;
//         }
//         if (i == n) {
//             results[id] = res;
//             res = 1;
//             id++;
//             i = 0;
//         }
//         if (id < n) {
//             res *= nums[i];
//         }
//     }
//     return results;
}
};