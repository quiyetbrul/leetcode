class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result = 0;

        std::unordered_set<char> s(jewels.begin(), jewels.end());

        for (const auto& i : stones) {
            if (s.contains(i))
                result++;
        }

        return result;
    }
};