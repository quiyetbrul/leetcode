/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
// balanceBST takes the root of a BST and returns a balanced BST.
func balanceBST(root *TreeNode) *TreeNode {
	// Step 1: Get the inorder traversal of the BST
	sortedNodes := inorderTraversal(root)
	// Step 2: Build a balanced BST from the sorted nodes
	return buildBalancedBST(sortedNodes, 0, len(sortedNodes)-1)
}

// inorderTraversal returns the nodes of the tree in sorted order.
func inorderTraversal(root *TreeNode) []int {
	if root == nil {
		return []int{} // Return an empty slice if root is nil
	}
	result := []int{}                    // Initialize an empty slice to store nodes
	result = append(result, inorderTraversal(root.Left)...) // Recursively traverse left subtree
	result = append(result, root.Val)    // Append current node value
	result = append(result, inorderTraversal(root.Right)...) // Recursively traverse right subtree
	return result                        // Return the sorted nodes
}

// buildBalancedBST builds a balanced BST from sorted nodes.
func buildBalancedBST(nodes []int, start, end int) *TreeNode {
	if start > end {
		return nil // Base case: return nil if start exceeds end
	}
	mid := start + (end-start)/2         // Calculate mid index
	root := &TreeNode{Val: nodes[mid]}   // Create new TreeNode with mid value as root
	root.Left = buildBalancedBST(nodes, start, mid-1) // Recursively build left subtree
	root.Right = buildBalancedBST(nodes, mid+1, end)  // Recursively build right subtree
	return root                          // Return the root of the balanced BST
}