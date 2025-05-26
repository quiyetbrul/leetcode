/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
    if head == nil || head.Next == nil{
        return head
    }

    curr:= head
    var prev *ListNode = nil

    for curr != nil{
        nxt := curr.Next
        curr.Next = prev
        prev = curr
        curr = nxt
    }

    return prev
}