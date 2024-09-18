class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> count;
        int result = 0;

        int left = 0;
        int right = 0;
        int max = 0;

        while(right < s.size()){
            count[s[right] - 'A']++;
            max = std::max(max, count[s[right] - 'A']);
            if(right - left + 1 - max > k){
                count[s[left] - 'A']--;
                left++;
            }
            result = std::max(result, right - left + 1);
            right++;
        }

        return result;
    }
};