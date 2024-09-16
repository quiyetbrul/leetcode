class Solution {
public:
    std::vector<std::vector<int>>
    insert(std::vector<std::vector<int>>& intervals,
           std::vector<int>& newInterval) {
        std::vector<std::vector<int>> results;
        int i = 0;
        int n = intervals.size();

        // Add all intervals before the new interval
        while (i < n && intervals[i][1] < newInterval[0]) {
            results.push_back(intervals[i]);
            i++;
        }

        // Merge overlapping intervals with the new interval
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = std::min(newInterval[0], intervals[i][0]);
            newInterval[1] = std::max(newInterval[1], intervals[i][1]);
            i++;
        }
        results.push_back(newInterval);

        // Add all intervals after the new interval
        while (i < n) {
            results.push_back(intervals[i]);
            i++;
        }

        return results;
    }
};