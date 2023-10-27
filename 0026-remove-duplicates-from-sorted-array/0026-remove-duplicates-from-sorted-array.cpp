class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};