class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         int N = candies.size();
        
        vector<bool> ans;
        
        int maxCandies = *max_element(candies.begin(), candies.end());
        
        for (int i = 0; i < N; i++)
        {
            if (candies[i] + extraCandies >= maxCandies)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        
        return ans;
    }
};