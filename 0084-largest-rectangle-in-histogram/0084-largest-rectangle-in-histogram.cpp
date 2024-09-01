#include <vector>
#include <stack>
#include <algorithm>

class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        int n = heights.size();
        if (n == 0)
            return 0;

        std::stack<int> st;
        int maxArea = 0;
        int i = 0;

        while (i < n) {
            if (st.empty() || heights[i] >= heights[st.top()]) {
                st.push(i++);
            } else {
                int h = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = std::max(maxArea, h * width);
            }
        }

        while (!st.empty()) {
            int h = heights[st.top()];
            st.pop();
            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = std::max(maxArea, h * width);
        }

        return maxArea;
    }
};