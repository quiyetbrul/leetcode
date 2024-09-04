class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end());

        std::vector<std::vector<int>> results;
        
        int min = intervals[0][0];
        int max = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (max < intervals[i][0]) {
                results.push_back({min, max});
                min = intervals[i][0];
                max = intervals[i][1];
            } else {
                max = std::max(max, intervals[i][1]);
            }
        }

        results.push_back({min, max});

        return results;
    }
};