class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        // std::sort(s.begin(), s.end());
        // std::sort(t.begin(), t.end());
        
        // return s == t;

        // OR

        std::unordered_map<char32_t, int>anagrams;

        for(const auto &c : s)
            anagrams[c]++;

        for(const auto &c : t){
            if(anagrams[c] && anagrams[c] > 0)
                anagrams[c]--;
            if(anagrams[c] == 0)
                anagrams.erase(c);
        }

        return anagrams.empty();
        
    }
};