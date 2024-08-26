class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;

        int left = 0;
        int right = height.size() - 1;
        int currentArea = 0;

        while(left < right){
            currentArea = std::min(height[left], height[right]) * (right - left);
            area = std::max(currentArea, area);
            height[left] < height[right] ? left++ : right--;
        }

        return area;
    }
};