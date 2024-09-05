class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         std::unordered_map<char, int> charCount;

        for (const auto& c : magazine)
            charCount[c]++;

        for (const auto& c : ransomNote) {
            if (charCount[c] <= 0)
                return false;
            charCount[c]--;
        }

        return true;
    }
};