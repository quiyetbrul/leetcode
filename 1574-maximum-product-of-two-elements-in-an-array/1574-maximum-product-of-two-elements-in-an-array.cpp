class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int high1 = 0;
        int high2 = 0;

        for (int num : nums) {
            if (num > high1) {
                high2 = high1;
                high1 = num;
            } else if (num > high2) {
                high2 = num;
            }
        }

        return (high1 - 1) * (high2 - 1);
    }
};