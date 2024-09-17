class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        if (timePoints.size() > 1440) {
            return 0; // Pigeonhole principle: more than 1440 times means duplicates
        }

        // Use a boolean array to track which minutes are present
        std::vector<bool> minuteMark(1440, false);

        for (const auto& time : timePoints) {
            int minutes = std::stoi(time.substr(0, 2)) * 60 + std::stoi(time.substr(3, 2));
            
            // If a time is duplicated, the min difference is 0
            if (minuteMark[minutes]) return 0;
            minuteMark[minutes] = true;
        }

        int prev = -1, first = -1, last = -1, minDiff = 1440;

        // Traverse the minuteMark array to find the minimum difference
        for (int i = 0; i < 1440; i++) {
            if (minuteMark[i]) {
                if (first == -1) first = i; // Mark the first occurrence
                if (prev != -1) {
                    minDiff = std::min(minDiff, i - prev);
                }
                prev = i;
                last = i; // Keep track of the last occurrence
            }
        }

        // Check the circular difference between the last and the first time points
        minDiff = std::min(minDiff, 1440 - last + first);

        return minDiff;
    }
};
