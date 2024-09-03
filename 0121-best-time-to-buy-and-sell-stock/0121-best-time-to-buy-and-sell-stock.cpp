class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 100001;
        int max = -1;

        for (int i = 0; i < prices.size(); i++){
            min = std::min(prices[i], min);
            max = std::max(prices[i] - min, max);
        }

        return max;
    }
};