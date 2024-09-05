class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        std::vector<int> count(26, 0);

        for (const auto& c : s)
            count[c - 'a']++;
        for (const auto& c : t)
            count[c - 'a']--;

        return std::all_of(count.begin(), count.end(),
                           [](int x) { return x == 0; });
    }
};