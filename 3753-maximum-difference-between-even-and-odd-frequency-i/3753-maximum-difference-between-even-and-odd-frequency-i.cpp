class Solution {
public:
    int maxDifference(string s) {
        std::vector<int> a(26);

        for(const auto& c : s){
            a[c - 'a']++;
        }

        int max = 0;
        int min = s.size();

        for(int i = 0; i < 26; i++){
            if (a[i] % 2 != 0){
                max = std::max(max, a[i]);
            }
            if(a[i] % 2 == 0 && a[i] > 0){
                min = std::min(min, a[i]);
            }
        }

        return max - min;
    }
};