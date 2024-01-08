class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());

        std::vector<std::vector<int>> result;

        int min_diff = INT_MAX;
        for(int i = 1; i < arr.size(); i++)
            min_diff = std::min(arr[i]-arr[i-1], min_diff);
        
        for(int i = 1; i < arr.size(); i++)
            if(arr[i] - arr[i-1] == min_diff){
                result.push_back({arr[i-1], arr[i]});
            }

        return result;
    }
};