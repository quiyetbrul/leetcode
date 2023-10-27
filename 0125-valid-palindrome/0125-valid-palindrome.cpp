class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true; 
        int right = s.size() - 1;
        int left = 0;
        while (left < right) {
            if (!isalnum(s[right])){right--; continue; }
            if (!isalnum(s[left])){left++; continue; }
            if (tolower(s[left++]) != tolower(s[right--])) return false;
        }
        return true;

        // std::string n;
        // for(const auto &c : s){
        //     if(isalnum(c)){
        //         n+=std::tolower(c);
        //     }
        // }

        // int left = 0;
        // int right = n.length() - 1;

        // while(left <= right){
        //     if (n[left++] != n[right--])
        //         return false;
        // }

        // return true;  
    }
};