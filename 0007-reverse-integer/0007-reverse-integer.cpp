class Solution {
public:
    int reverse(int x) {
        long long reversed = 0;
        while(x) {
            reversed = reversed*10 + x%10;
            x /= 10;
        }
        return (reversed<INT_MIN || reversed>INT_MAX) ? 0 : reversed;
    }
};