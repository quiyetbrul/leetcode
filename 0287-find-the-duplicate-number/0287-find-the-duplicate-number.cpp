class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Step 1: Initialize pointers
        int slow = nums[0];
        int fast = nums[0];

        // Step 2: Find the intersection point
        // Use a do-while loop to ensure both pointers move at least once
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Step 3: Find the entrance to the cycle
        // Use a while loop to move both pointers until they meet
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        // The meeting point is the duplicate number
        return slow;
    }
};