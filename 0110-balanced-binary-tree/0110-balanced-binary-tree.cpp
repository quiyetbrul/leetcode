/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return dfs(root).first;
    }

private:
std::pair<bool, int> dfs(TreeNode* node){
    if(!node) return {true, 0};

    auto [lBalanced, lHeight] = dfs(node->left);
    auto [rBalanced, rHeight] = dfs(node->right);

    bool isBalanced = lBalanced && rBalanced && std::abs(lHeight - rHeight) <= 1;

    return {isBalanced, 1 + std::max(lHeight, rHeight)};
}
};