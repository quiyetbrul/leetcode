class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();

        // transpose matrix
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < rows; j++) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }

        // 1,2,3  1,4,7
        // 4,5,6  2,5,8
        // 7,8,9  3,6,9

        // reverse matrix
        for (int i = 0; i < rows; i++) {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};