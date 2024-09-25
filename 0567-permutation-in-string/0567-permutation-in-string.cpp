class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        std::vector<int> a1(26, 0);
        std::vector<int> a2(26, 0);

        for (const auto& c : s1) {
            a1[c - 'a'] += 1;
        }

        int left = 0;
        int right = 0;

        while (right < s2.length()) {
            a2[s2[right] - 'a'] += 1;

            if (right - left + 1 == s1.length()) {
                if (a1 == a2) return true;
                a2[s2[left] - 'a'] -= 1;
                left++;
            }

            right++;
        }

        return false;
    }
};