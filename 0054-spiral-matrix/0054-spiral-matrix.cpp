class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        std::vector<int> results;

        if (matrix.empty() || matrix[0].empty()) return results;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int dir = 1;

        int row = 0;
        int col = -1;

        while(rows > 0 && cols > 0){
            // left or right, depending on the dir
            for(int i = 0; i < cols; i++){
                col += dir;
                results.push_back(matrix[row][col]);
            }
            rows--;

            // up or down, depending on the dir
            for(int i = 0; i < rows; i++){
                row += dir;
                results.push_back(matrix[row][col]);
            }
            cols--;

            dir*=-1;
        }

        return results;
    }
};