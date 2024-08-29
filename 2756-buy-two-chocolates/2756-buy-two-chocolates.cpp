class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {

        int min1 = 101;
        int min2 = 101;

        for (const auto& i : prices) {
            if (i <= min1) {
                min2 = min1;
                min1 = i;
            } else if (i < min2)
                min2 = i;
        }

        int p = min1 + min2;

        if (p <= money)
            money -= p;

        return money;
    }
};