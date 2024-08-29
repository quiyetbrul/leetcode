class Solution {
public:
    // on/o1
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int rows = image.size();
        int cols = image[0].size() - 1;
        
        for(int r = 0; r < rows; r++){
            int left = 0;
            int right = cols;
            // flip + invert
            while(left <= right){
                int temp = 1 - image[r][left];
                image[r][left++] = 1 - image[r][right];
                image[r][right--] = temp;
                // I ALWAYS FORGET TO MOVE THE POINTERS!!!
            }
        }

        return image;
    }
};