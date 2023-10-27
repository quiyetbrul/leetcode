class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k) {
    if (nums.size() <= 1) 
        return nums;

    std::unordered_map<int, int> numsMap;

    // populating numsMap with nums values
    for (const auto &num : nums) 
        numsMap[num]++;

    // Declare vector of pairs
    std::vector<std::pair<int, int>> A;

    //// found out about std::transform from G4G
    // for (auto &it : numsMap) 
    //     A.push_back(it);
    //// literally not readable at ALL
    //// ig plus points for learning an STL method but minus points for not code being readable???
    std::transform(numsMap.begin(), numsMap.end(), std::back_inserter(A),
        [](const std::pair<int, int>& pair) {
            return pair;
        }
    );

    // sort from G4G
    auto cmp = [](const std::pair<int, int> &a, const std::pair<int, int> &b) {
        return a.second > b.second; // Sort in descending order
    };

    std::sort(A.begin(), A.end(), cmp);

    std::vector<int> result;
    // Extract the k most frequent elements
    for (int i = 0; i < k && i < A.size(); i++) {
        result.push_back(A[i].first);
    }

    return result;
    }
};