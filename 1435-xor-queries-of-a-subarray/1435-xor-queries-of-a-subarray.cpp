class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> prefixXOR(n);
        prefixXOR[0] = arr[0];
        
        for (int i = 1; i < n; ++i) {
            prefixXOR[i] = prefixXOR[i - 1] ^ arr[i];
        }
        
        vector<int> result;
        for (const auto& query : queries) {
            int Li = query[0];
            int Ri = query[1];
            if (Li == 0) {
                result.push_back(prefixXOR[Ri]);
            } else {
                result.push_back(prefixXOR[Ri] ^ prefixXOR[Li - 1]);
            }
        }
        
        return result;
    }
};