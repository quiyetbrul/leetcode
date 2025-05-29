/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> nums;

        ListNode* curr = head;
        while(curr){
            nums.push_back(curr->val);
            curr = curr->next;
        }

        int low = 0;
        int hi = nums.size() - 1;

        while(low < hi){
            if(nums[low++]!=nums[hi--]){
                return false;
            }
        }
        
        return true;
    }
};