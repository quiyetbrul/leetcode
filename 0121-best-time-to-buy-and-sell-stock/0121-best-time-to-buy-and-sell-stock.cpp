class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 1;
        int max = 0;

        while(l < prices.size()){
            int lp = prices[l];
            int rp = prices[r];
            if(lp > rp){
                l++;
                r++;
                if(r >= prices.size()){
                    r = prices.size();
                }
                continue;
            }
            if(lp < rp){
                max = std::max(max, rp - lp);
                r++;
                if(r >= prices.size()){
                    r = prices.size();
                }
            }
            if(prices[l] > prices[r]){
                l++;
            }
        }

        return max;
    }
};