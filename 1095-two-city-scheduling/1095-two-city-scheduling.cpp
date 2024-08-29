class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        int size = costs.size();
        int requiredAttendance = size / 2;

        // O(n) space
        std::vector<std::vector<int>> diff;

        for (int i = 0; i < size; ++i) {
            // Calculate the difference for each cost pair and store it along with the costs
            diff.push_back({costs[i][1] - costs[i][0], costs[i][0], costs[i][1]});
        }

        // O(nlogn) time
        // Sort based on the difference
        std::sort(diff.begin(), diff.end(),
                [](const std::vector<int>& a, const std::vector<int>& b) {
                    return a[0] < b[0];
                });

        // Iterate over the sorted diff vector
        // The first half will go to city A, the second half to city B
        for (int i = 0; i < requiredAttendance; ++i) {
            sum += diff[i][2]; // Add cost for city B
        }
        for (int i = requiredAttendance; i < size; ++i) {
            sum += diff[i][1]; // Add cost for city A
        }

        return sum;
    }
};
