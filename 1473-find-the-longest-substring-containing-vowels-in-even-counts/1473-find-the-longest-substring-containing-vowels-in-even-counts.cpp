class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<string, int> seen;
        seen["00000"] = -1; // Initialize with all counts 0 at index -1
        int maxLength = 0;
        vector<int> counts(5, 0); // Counts for 'a', 'e', 'i', 'o', 'u'

        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (c == 'a') {
                counts[0] = (counts[0] + 1) % 2; // Toggle the parity of 'a'
            } else if (c == 'e') {
                counts[1] = (counts[1] + 1) % 2; // Toggle the parity of 'e'
            } else if (c == 'i') {
                counts[2] = (counts[2] + 1) % 2; // Toggle the parity of 'i'
            } else if (c == 'o') {
                counts[3] = (counts[3] + 1) % 2; // Toggle the parity of 'o'
            } else if (c == 'u') {
                counts[4] = (counts[4] + 1) % 2; // Toggle the parity of 'u'
            }

            // Create a string representation of the current state
            string state = to_string(counts[0]) + to_string(counts[1]) +
                           to_string(counts[2]) + to_string(counts[3]) +
                           to_string(counts[4]);

            if (seen.find(state) != seen.end()) {
                maxLength = max(maxLength, i - seen[state]);
            } else {
                seen[state] = i;
            }
        }

        return maxLength;
    }
};