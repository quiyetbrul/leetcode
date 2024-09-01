class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si = 0;

        for(int i = 0; i < t.size(); i++){
            if(si >= s.size()) break;
            if(t[i] == s[si]) si+=1;
        }

        return si == s.size();
    }
};