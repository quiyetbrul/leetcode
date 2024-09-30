/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x, next(next)) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head)
            return nullptr;

        ListNode* dummy = new ListNode(0, head);
        ListNode* slow = dummy;
        ListNode* fast = head;
        while (n > 0) {
            fast = fast->next;
            n--;
        }
        while (fast) {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = slow->next->next;

        return dummy->next;
    }

    //     ListNode* removeNthFromEndReverse(ListNode* head, int n) {
    //         if (!head) return nullptr;

    //         ListNode* dummy = new ListNode(0, reverse(head));
    //         ListNode* current = dummy;
    //         for (int i = 1; i < n; ++i) {
    //             current = current->next;
    //         }
    //         current->next = current->next->next;

    //         return reverse(dummy->next);
    //     }

    // private:
    //     ListNode* reverse(ListNode* head) {
    //         ListNode* prev = nullptr;
    //         ListNode* curr = head;
    //         while (curr) {
    //             ListNode* temp = curr->next;
    //             curr->next = prev;
    //             prev = curr;
    //             curr = temp;
    //         }
    //         return prev;
    //     }
};