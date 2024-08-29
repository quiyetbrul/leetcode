class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        int size = costs.size();
        int requiredAttendance = size / 2;
        int cityB = 0;

        int left = 0;
        int right = size - 1;

        std::vector<std::vector<int>> diff;

        while (left < right) {
            // todo get diff for each 2d array {c2-c1, c1, c2}
            // {0 is diff, 1 is c1, 2 c2}
            diff.push_back({costs[left][1] - costs[left][0], costs[left][0],
                            costs[left][1]});
            diff.push_back({costs[right][1] - costs[right][0], costs[right][0],
                            costs[right][1]});
            left++;
            right--;
        }

        // sort base on diff
        std::sort(diff.begin(), diff.end(),
                  [](const std::vector<int>& a, const std::vector<int>& b) {
                      return a[0] < b[0];
                  });

        // iterate over diff
        // the first n/2 will go to c2, meaning add c2 value to sum
        // the rest will go to c1, meaning add c1 value to sum

        for (const auto& i : diff) {
            if (cityB < requiredAttendance) {
                std::cout << i[2] << std::endl;
                sum += i[2];
                cityB++;
            } else {
                std::cout << i[1] << std::endl;
                sum += i[1];
            }
        }

        int leftDiff = 0;
        int rightDiff = diff.size() - 1;

        return sum;
    }
};
