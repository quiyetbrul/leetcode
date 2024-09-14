class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 1;
        int right = num;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long sq = static_cast<long long>(mid) * mid;

            if (sq == num) return true;
            else if (sq > num) right = mid - 1;
            else left = mid + 1;
        }

        return false;
    }
};