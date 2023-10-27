class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        
        // 2 pointer approach but longer
        int left = 0;
        int right = n-1;
        while(left <= right){
            char temp = s[left];
            s[left++] = s[right];
            s[right--] = temp;
        }

        // 2 pointer approach using STL
        // for(int i = 0; i < n/2; i++)
        //     swap(s[i], s[n-i-1]);

        //// OR
        // reverse(s.begin(), s.end();

        //// OR
        // vector<char> str;
        // for(int i = n - 1; i >= 0; i--){
        //     str.push_back(s[i]);
        // }
        // for(int i = 0; i < n; i++){
        //     s[i] = str[i];
        // }
    }
};