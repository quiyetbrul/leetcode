class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m, j = 0; j < n; j++){
            nums1[i++] = nums2[j];
        }
        sort(nums1.begin(), nums1.end());

        //// indicate last element of nums1, nums2, and when merged
        // int num1 = m - 1;
        // int num2 = n - 1;
        // int nums = m + n - 1;
    
        // while (num2 >= 0){
        //     if (num1 >= 0 && nums1[num1] > nums2[num2]){
        //         nums1[nums--] = nums1[num1--];
        //     }else{
        //         nums1[nums--] = nums2[num2--];
        //     }
        // }
    }
};
