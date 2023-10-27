class Solution {
public:
    bool validPalindrome(string s) {
        std::function<bool(int, int, int)> isPalindrome = [&](int count, int left, int right) -> bool {
            if (left >= right)
                return true;
            if (s[left] == s[right])
                return isPalindrome(count, left + 1, right - 1);
            if (count == 0)
                return isPalindrome(count + 1, left + 1, right) ||
                        isPalindrome(count + 1, left, right - 1);
            return false;
        };
        return isPalindrome(0, 0, s.size() - 1);
    }
};