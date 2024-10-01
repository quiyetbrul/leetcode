class Solution {
public:
    int findGCD(vector<int>& nums) {
        int low = *std::min_element(nums.begin(), nums.end());
        int hi = *std::max_element(nums.begin(), nums.end());
        return gcd(low, hi);
    }

private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};