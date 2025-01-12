class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> results;
        std::map<std::vector<int>, std::vector<std::string>> m;

        for(const auto& s : strs){
            std::vector<int> alphabet(26,0);
            for(const auto& c : s){
                alphabet[c - 'a']++;
            }
            m[alphabet].push_back(s);
        }

        for(const auto& [k,v] : m){
            results.push_back(v);
        }

        return results;
    }
};