class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // first check each row and column sizes
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        if (rows == 0 || cols == 0) return false;
        
        int row = 0;
        int col = cols - 1;
        
        while(row < rows && col > -1){
            int current = matrix[row][col];
            if(current == target)
                return true;

            if (target > current){
                if(row < rows - 1 && target < matrix[row + 1][0])
                    return false;
                row++;
            }else 
                col--;
        }
        
        return false;
    }
};