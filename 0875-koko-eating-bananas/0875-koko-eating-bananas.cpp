class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min = 1;
        int max = *std::max_element(piles.begin(), piles.end());

        while (min < max) {
            int mid = min + (max - min) / 2;
            if (kWorks(piles, mid, h))
                max = mid;
            else
                min = mid + 1;
        }

        return min;
    }

private:
    bool kWorks(std::vector<int>& piles, int k, int h) {
        int hours = 0;
        for (const auto& i : piles)
            hours += (i + k - 1) / k;
        return hours <= h;
    }
};
