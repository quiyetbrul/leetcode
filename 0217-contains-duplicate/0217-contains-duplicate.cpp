class Solution {
public:
    
bool containsDuplicate(std::vector<int> &nums) {
  std::set<int> s;
  for (const auto &i : nums) {
    s.insert(i);
  }

  return s.size() != nums.size();
}
};