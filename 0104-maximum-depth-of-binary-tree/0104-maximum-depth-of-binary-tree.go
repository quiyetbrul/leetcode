/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func maxDepth(n *TreeNode) int {
    if n == nil {
		return 0
	}
	left := maxDepth(n.Left)
	right := maxDepth(n.Right)
    if left > right{
        return left + 1
    }
    return right + 1
}