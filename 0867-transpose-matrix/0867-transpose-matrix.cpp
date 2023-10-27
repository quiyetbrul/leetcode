class Solution {
public:

std::vector<std::vector<int>> transpose(std::vector<std::vector<int>> &matrix) {
  int m = matrix.size();
  int n = matrix[0].size();

  std::vector<std::vector<int>> results(n, std::vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      results[i][j] = matrix[j][i];
    }
  }

  return results;
}

};