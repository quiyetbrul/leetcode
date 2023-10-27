class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int h = 0;
        int w = 0;

        int start = 0;
        int end = height.size() - 1;

        while(start < end){
            h = std::min(height[start], height[end]);
            w = end - start;

            if (h*w > area)
                area = h*w;
            
            height[start] < height[end] ? start++ : end--;
        }

        return area;
        
    }
};