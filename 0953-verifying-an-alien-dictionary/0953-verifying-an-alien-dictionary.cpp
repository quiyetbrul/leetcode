class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int map[26]; // letters in alphabet.
        for (int i = 0; i < 26; i++) // every word in  the array
            map[order[i] - 'a'] = i;
        for (string &w : words) // each character in each word in the array
            for (char &c : w)
                c = map[c - 'a'];
        return is_sorted(words.begin(), words.end());
    }
};