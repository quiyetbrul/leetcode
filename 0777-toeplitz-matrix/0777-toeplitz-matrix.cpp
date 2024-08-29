class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int r = 0; r < rows - 1; r++) 
            for (int c = 0; c < cols - 1; c++) 
                if(matrix[r][c] != matrix[r+1][c+1])
                    return false;

        return true;
    }
};