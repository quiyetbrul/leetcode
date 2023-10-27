/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
import "math"

func isValidBST(n *TreeNode) bool {
	var validate func(node *TreeNode, lower int, upper int) bool
	validate = func(node *TreeNode, lower int, upper int) bool {
		if node == nil {
			return true
		}

		if (lower < node.Val) && (node.Val < upper) {
			return validate(node.Left, lower, node.Val) && validate(node.Right, node.Val, upper)
		} else {

			return false
		}
	}

	return validate(n, math.MinInt, math.MaxInt)
}