class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // check last element of each row
        // if target >= row[length-1]
            // move to the next row (top to bottom)
                // check if it makes sense to go to the next row
                    // check target > row[i]col[length-1] && target < row[i+1]col[0] to return false earlier
        // else
            // iterate through each column in the same row (right to left)
        
        int rows = matrix.size();
        if (rows == 0) return false;
        
        int cols = matrix[0].size();
        if (cols == 0) return false;
        
        int row = 0, col = cols - 1;
        
        while (row < rows && col > -1) {
            int cur = matrix[row][col];
            if (cur == target) {
                return true;
            }
            if (target > cur) {
                if (row < rows - 1 && target < matrix[row + 1][0]) {
                    return false;
                }
                row++;
            } else {
                col--;
            }
        }
        
        return false;
    }
};