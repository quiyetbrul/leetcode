/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func isSymmetric(root *TreeNode) bool {
    return isMirror(root,root)
}

func isMirror(left, right *TreeNode) bool {
    if left == nil && right == nil{
        return true
    } 
    
    if left == nil || right == nil {
        return false
    }
    
    return left.Val == right.Val && isMirror(left.Left, right.Right) && isMirror(left.Right, right.Left)
}
