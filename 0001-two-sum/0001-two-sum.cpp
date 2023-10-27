class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(size_t i = 0; i < nums.size(); ++i) {
            map.emplace(std::make_pair(nums.at(i),i));
        }
        for(size_t i = 0; i < nums.size(); ++i) {
            const auto mit = map.find(target - nums.at(i));
            if(mit != map.end() && (int)i != mit->second) {
                return {(int)i, mit->second};
            }
        }
        return vector<int>();
    }
};