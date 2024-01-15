class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        std::sort(piles.begin(), piles.end());
        
        int left = 1;
        int right = piles.back();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int hours = findHours(piles, mid);

            if (hours > h) left = mid + 1;
            else right = mid;
        }
        return left;
    }

private:
    int findHours(const std::vector<int>& piles, int mid) {
        int total = 0;
        for (int pile : piles)
            total += (pile + mid - 1) / mid;
        return total;
    }

};