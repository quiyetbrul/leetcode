// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         // first check each row and column sizes
//         int rows = matrix.size();
//         int cols = matrix[0].size();
        
//         if (rows == 0 || cols == 0) return false;
        
//         int row = 0;
//         int col = cols - 1;
        
//         while(row < rows && col > -1){
//             int current = matrix[row][col];
//             if(current == target)
//                 return true;

//             // could be better and make it binary search instead of iterating through each element in the row
//             if (target > current){
//                 if(row < rows - 1 && target < matrix[row + 1][0])
//                     return false;
//                 row++;
//             }else 
//                 col--;
//         }
        
//         return false;
//     }
// };

// // USING BINARY SEARCH

// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int rows = matrix.size();
//         int cols = matrix[0].size();
        
//         if (rows == 0 || cols == 0) return false;
        
//         for (int i = 0; i < rows; ++i) {
//             // Apply binary search within each row
//             int left = 0, right = cols - 1;
            
//             while (left <= right) {
//                 int mid = left + (right - left) / 2;
                
//                 if (matrix[i][mid] == target)
//                     return true;
//                 else if (matrix[i][mid] < target)
//                     left = mid + 1;
//                 else
//                     right = mid - 1;
//             }
//         }
        
//         return false;
//     }
// };

// FLATTENED 2D ARRAY

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        if (rows == 0 || cols == 0) return false;
        
        int left = 0;
        int right = rows * cols - 1; // Treat the matrix as a flattened array
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midElement = matrix[mid / cols][mid % cols]; // Convert index to 2D matrix coordinates
            
            if (midElement == target)
                return true;
            else if (midElement < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        
        return false;
    }
};
