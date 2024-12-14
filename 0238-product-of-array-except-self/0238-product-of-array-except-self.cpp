class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> results(n, 1);

        int leftProduct = 1;
        // [1,2,3,4]
        // since initial leftProduct is 1,
        // the first element is essentially ignored
        // and every ith element is multiplied by
        // the running product of the previous elements
        // the ith element is still ignored since all elements are init to 1
        for(int i = 0; i < n; i++){
            results[i] *= leftProduct;
            leftProduct *= nums[i];
        }


        int rightProduct = 1;
        for(int i = n - 1; i >=0; i--){
            results[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return results;
    }
};