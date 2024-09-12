class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        std::vector<bool> al(26, false);

        for (const auto& c : allowed) {
            al[c - 'a'] = true;
        }

        int count = 0;
        for (const auto& s : words) {
            count++;
            for (const auto& c : s) {
                if (!al[c - 'a']) {
                    count--;
                    break;
                }
            }
        }

        return count;
    }
};