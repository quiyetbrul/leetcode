class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> m;
        for(const auto& c : s){
            m[c]++;
        }

        for(const auto& c : t){
            if(!m.contains(c)) return false;
            if(m[c] && m[c]>0) m[c]--;
            if(m[c]==0) m.erase(c);
        }

        return m.empty();
    }
};