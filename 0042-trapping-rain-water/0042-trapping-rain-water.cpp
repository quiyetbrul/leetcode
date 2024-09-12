class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0;

        int left = 0;
        int right = height.size() - 1;

        int maxLeft = height[left];
        int maxRight = height[right];

        while (left < right) {
            if (maxLeft <= maxRight) {
                maxLeft = std::max(maxLeft, height[++left]);
                result += maxLeft - height[left];
            } else {
                maxRight = std::max(maxRight, height[--right]);
                result += maxRight - height[right];
            }
        }

        return result;
    }
};
