class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1)
            return true; // Special case for 1

        int left = 1;
        int right = num / 2;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long sq = static_cast<long long>(mid) * mid;

            if (sq == num)
                return true;
            else if (sq > num)
                right = mid - 1;
            else
                left = mid + 1;
        }

        return false;
    }
};