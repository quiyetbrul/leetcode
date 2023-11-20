class Solution {
public:
    
bool containsDuplicate(std::vector<int> &nums) {
  std::set<int> s;
  for (const auto &i : nums) {
    s.insert(i);
  }

  return s.size() != nums.size();
}
    
bool containsDuplicateUnorderedMap(std::vector<int> &nums) {
  if (nums.size() > 1) {
    std::unordered_map<int, int> numsMap;
    for (const auto &i : nums) {
      if (numsMap[i])
        return true;
      numsMap[i] = 1;
    }
  }
  return false;
}
    
bool containsDuplicateSort(std::vector<int> &nums) {
  sort(nums.begin(), nums.end());
  int n = nums.size();
  for (int i = 1; i < n; i++) {
    if (nums[i] == nums[i - 1])
      return true;
  }
  return false;
}

};