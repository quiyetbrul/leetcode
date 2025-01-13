class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.empty()) return{};

        std::unordered_map<int,int> m;
        for(const auto& n : nums){
            m[n]++;
        }

        std::vector<std::vector<int>> freq(nums.size()+1);
        for(const auto& [k,v] : m){
            freq[k].push_back(v);
        }

        std::vector<int> results;
        for(int i = nums.size(); i >= 0; i--){
            if(!freq[i].empty() && results.size() < k)
                results.insert(results.end(), freq[i].begin(), freq[i].end());
        }

        return results;
    }
};