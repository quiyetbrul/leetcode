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

            // NEED TO UNDERSTAND THIS MATH!
            // REVIEW TUPLE
            int subgridIdx = (i / 3) * 3 + j / 3;
            // Check for row, column, and 3x3 repeated values
            if (rows[i].count(digit) > 0 ||
                cols[j].count(digit) > 0 ||
                subgrids[subgridIdx].count(digit) > 0) {
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