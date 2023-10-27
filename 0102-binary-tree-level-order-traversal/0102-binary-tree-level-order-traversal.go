/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func levelOrder(root *TreeNode) [][]int {
    var bfs func(s *[][]int, level int, root *TreeNode)
    bfs = func(s *[][]int, level int, root *TreeNode) {
        if root == nil {
            return
        }
        if len(*s) == level {
            *s = append(*s, []int{})
        }
        (*s)[level] = append((*s)[level], root.Val)
        for _, v := range []*TreeNode{root.Left, root.Right} {
            bfs(s, level + 1, v)
        }
    }
    if root == nil{
        return [][] int{}
    }
    var s[][]int
    bfs(&s,0,root)
    return s
    
}