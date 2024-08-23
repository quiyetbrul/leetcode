class Solution {
public:
bool isValidSudoku(std::vector<std::vector<char>>& board) {
    std::vector<std::unordered_set<char>> rows(9);
    std::vector<std::unordered_set<char>> cols(9);
    std::vector<std::unordered_set<char>> subgrids(9);

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char digit = board[i][j];

            if (digit == '.') {
                continue;
            }

            // sub grid
            // 0 1 2
            // 3 4 5
            // 6 7 8
            int subgridIdx = (i / 3) * 3 + j / 3;
            // Check for row, column, and 3x3 repeated values
            if (rows[i].contains(digit) ||
                cols[j].contains(digit) ||
                subgrids[subgridIdx].contains(digit)) {
                return false;
            }

            rows[i].insert(digit);
            cols[j].insert(digit);
            subgrids[subgridIdx].insert(digit);
        }
    }

    return true;
}
};