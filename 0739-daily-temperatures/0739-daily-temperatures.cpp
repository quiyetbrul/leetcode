class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& temperatures) {
        std::vector<int> v(temperatures.size(), 0);
        std::stack<int> s;

        for (int i = 0; i < temperatures.size(); i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int idx = s.top();
                s.pop();
                v[idx] = i - idx;
            }
            s.push(i);
        }

        return v;
    }
};