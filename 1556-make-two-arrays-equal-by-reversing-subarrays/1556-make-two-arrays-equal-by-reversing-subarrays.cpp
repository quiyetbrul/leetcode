class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        std::unordered_map<int, int> t;
        for (const auto& i : target) {
            t[i]++;
        }
        std::unordered_map<int, int> a;
        for (const auto& i : arr) {
            a[i]++;
        }
        return t == a;
    }
};