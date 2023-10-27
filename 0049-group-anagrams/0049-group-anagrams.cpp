class Solution {
public:
    /*
    NOTE: COULD HAVE WORKED IF ASCII VALUES WERE ADDED AS STRINGS AND NOT INT!!!
    FAILED ATTEMPT: ADDING ASCII VALUES DOESN'T WORK
                        "duh" and "ill" have the same sum

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<int, std::vector<std::string>> anagramGroups;
        for (const auto& str : strs) {
            int sumStr = 0;
            for (const auto& c : str)
                sumStr += c;
            anagramGroups[sumStr].push_back(str);
        }
        std::vector<std::vector<std::string>> result;
        for (const auto& entry : anagramGroups)
            result.push_back(entry.second);
        return result;
   }
   */

    // O(N * K) time | O(N) space
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        /*
            - create an array that keeps track of each letter's frequency, similar to TopKFrequency
            - use this as key in a map, where its value will be an array of anagrams
            - insert anagram.second into another array, which will be returned
        */
        std::vector<std::vector<std::string>> v;
        std::map<std::vector<int>, std::vector<std::string>> mp;
        
        // O(N) iterates through each str in strs
        for (const std::string& str : strs) {
            // TODO: does this support unicode? just ascii it seems like!
            std::vector<int> count(26, 0); // each element represents a-z initialized with 0

            // the value at a given index corresponds to the alphabet placement + its frequency in the string
            // eg.  a-1, e-1, t-1 is the same as 10001000000000000001000000
            // O(K), each str has different length
            for (char c : str)
                count[c - 'a'] += 1;
            
            mp[count].push_back(str);
        }

        for (const auto& it : mp) {
            v.push_back(it.second);
        }

        return v; // {{eat, ate, tea}, {...}}
    }
};