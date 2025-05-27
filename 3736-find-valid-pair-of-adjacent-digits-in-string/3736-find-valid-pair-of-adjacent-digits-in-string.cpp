class Solution {
public:
    string findValidPair(string s) {
        std::unordered_map<int, int> um;
        for(const auto& c : s){
            um[c - '0']++;
        }

        for(int i = 0; i < s.size() - 1; i++){
            int first = s[i] - '0';
            int second = s[i+1] - '0';
            if(first != second &&
                um[first] == first &&
                um[second] == second){
                return s.substr(i, 2);
            }
        }

        return "";
    }
};