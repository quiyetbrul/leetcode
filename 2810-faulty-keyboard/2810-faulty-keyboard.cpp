class Solution {
public:
    std::string finalString(std::string s) {
        int n = s.size();
        for(int i = 0; i < n; i++){
            if (s[i] != 'i') continue;

            int left = 0;
            int right = i-1;

            while(left < right)
                swap(s[left++], s[right--]);

            s.erase(i--, 1);
        }

        return s;

        //// OR

        // std::string ans = "";
        // for(auto c: s){
        //     if( c != 'i' ) ans += c;
        //     else std::reverse(ans.begin(), ans.end());
        // }
        // return ans;
    }
};