class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> chSet;
        int l = 0;
        int res = 0;
        for (int r = 0; r < s.length(); ++r) {
            while (chSet.find(s[r]) != chSet.end()) {
                chSet.erase(s[l]);
                l++;
            }
            chSet.insert(s[r]);
            res = std::max(res, r - l + 1);
        }
        return res;
    }
};