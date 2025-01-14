class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) return true;
        
        int l = 0;
        int r = s.length() - 1;

        while(l <= r){
            if(!isalnum(s[l]) || s[l] == ' '){
                l++;
                continue;
            }
            if(!isalnum(s[r]) || s[r] == ' '){
                r--;
                continue;
            }
            if(tolower(s[l++]) != tolower(s[r--]))
                return false;
        }

        return true;
    }
};