class Solution {
public:
    std::string reverseVowels(std::string s) {
        int left = 0;
        int right = s.length() - 1;
        std::string vowels = "aeiouAEIOU";
        
        while (left < right){
            if (vowels.find(s[left]) == std::string::npos){
                left++;
                continue;
            }
            if (vowels.find(s[right]) == std::string::npos){
                right--;
                continue;
            }

                swap(s[left++], s[right--]);

        }

        return s;
    }
};