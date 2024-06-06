class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        // find freq of each nums[i]
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        
        // index is freq, nums[i] is element
        // eg 1,1,1,2,2,2,3
        // {3},{},{1,2},{},{},{},{}
        vector<vector<int>> buckets(n + 1);
        for (auto it = m.begin(); it != m.end(); it++) {
            buckets[it->second].push_back(it->first);
        }
        
        vector<int> result;
        // iterate desc
        for (int i = n; i >= 0; i--) {
            if (result.size() >= k) {
                break;
            }
            if (!buckets[i].empty()) {
                // add all elements at buckets[i]
                result.insert(result.end(), buckets[i].begin(), buckets[i].end());
            }
        }
        
        return result;
    }
};
