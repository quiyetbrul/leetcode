/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSymmetric(n *TreeNode) bool {
	var isMirror func(lKey, rKey *TreeNode) bool
	isMirror = func(lKey, rKey *TreeNode) bool {
		if lKey == nil && rKey == nil {
			return true
		}

		if lKey == nil || rKey == nil {
			return false
		}

		return lKey.Val == rKey.Val && isMirror(lKey.Left, rKey.Right) && isMirror(lKey.Right, rKey.Left)

	}
	return isMirror(n, n)
}