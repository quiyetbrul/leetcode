class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.compare(" ")==0) return 0;
        
        int len = 0;
        auto it = s.rbegin();
        
        // ignore white spaces at the end
        while(*it==' ') ++it;
        
        //count len of the last word until white space
        while(it!=s.rend() && *it++ != ' ') ++len;
        
        return len;
    }
};