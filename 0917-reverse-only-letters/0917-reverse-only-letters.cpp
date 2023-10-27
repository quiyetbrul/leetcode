class Solution {
public:
    std::string reverseOnlyLetters(std::string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right){
            if(!isalpha(s[left])){
                left++;
                continue;
            }
            if(!isalpha(s[right])){
                right--;
                continue;
            }

            swap(s[left++], s[right--]);
        }

        return s;
    }
};