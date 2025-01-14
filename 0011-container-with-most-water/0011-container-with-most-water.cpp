class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int l = 0;
        int r = height.size() - 1;

        while(l <= r){
            maxArea = std::max(maxArea, (r - l) * std::min(height[l], height[r]));
            height[l] > height[r] ? r-- : l++;
        }

        return maxArea;
    }
};