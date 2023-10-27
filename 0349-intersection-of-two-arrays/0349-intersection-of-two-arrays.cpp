class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        // std::vector<int> result;
        // std::vector<int>::iterator it;
        // for(const auto& num : nums2){
        //     it = find(nums1.begin(), nums1.end(), num);
        //     if(it != nums1.end()){
        //         it = find(result.begin(),result.end(), num);
        //         if(it == result.end())
        //             result.push_back(num);
        //     }
        // }
        // return result;

        // OR

        std::unordered_set<int> s(nums1.begin(), nums1.end());
        std::vector<int> result;
        
        for (const int& num : nums2) {
            if (s.count(num) > 0) {
                result.push_back(num);
                s.erase(num);
            }
        }
        
        return result;
    }
};