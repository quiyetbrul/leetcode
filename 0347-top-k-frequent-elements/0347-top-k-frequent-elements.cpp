class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        if (n < 1){
            return {};
        }

        std::unordered_map<int, int> m;

        // element's freq
        for(const auto& i : nums){
            m[i]++;
        }

        // index is freq, nums[i] is element
        // eg 1,1,1,2,2,2,3
        // {3},{},{1,2},{},{},{},{}
        // eliminate sorting by
        // making the index the frequency
        std::vector<std::vector<int>> freq(n+1);
        for(auto it = m.begin(); it != m.end(); it++){
            freq[it->second].push_back(it->first);
        }

        std::vector<int> result;
        for(int i = n; i >= 0; i--){
            if(freq[i].empty()) continue;
            if(result.size() >= k) break;
            result.insert(result.end(), freq[i].begin(), freq[i].end());
        }

        return result;
    }
};