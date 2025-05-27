class Solution {
public:
    string findValidPair(string s) {
        std::unordered_map<char, int> um;
        for(const auto& c : s){
            um[c]++;
        }

        for(int i = 0; i < s.size() - 1; i++){
            if(s[i] != s[i+1] &&
                um[s[i]] == s[i] - '0' &&
                um[s[i+1]] == s[i+1] - '0'){
                return s.substr(i, 2);
            }
        }

        return "";
    }
};