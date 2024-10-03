class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::unordered_map<int, int> t;
        for (const auto& i : target) {
            t[i]++;
        }
        for (const auto& i : arr) {
            if (!t.contains(i)) {
                return false;
            }
            t[i]--;
            if (t[i] == 0) {
                t.erase(i);
            }
        }
        return true;
    }
};