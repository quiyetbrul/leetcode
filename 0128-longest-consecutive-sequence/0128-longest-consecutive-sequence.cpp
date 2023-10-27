class Solution {
public:
	int longestConsecutive(std::vector<int> &nums) {
		if (nums.size() == 0)
			return 0;

		std::unordered_set<int> numsSet;

		for (const auto &i : nums)
			numsSet.insert(i);

		int maxLength = 0;
		int currentNum = 0;
		int currentLength = 0;

		for (const auto &i : numsSet) {
			if (numsSet.find(i - 1) == numsSet.end()) {
				currentNum = i;
				currentLength = 1;

				while (numsSet.find(currentNum + 1) != numsSet.end()) {
					currentNum += 1;
					currentLength++;
				}
			}

			if (currentLength > maxLength) {
				maxLength = currentLength;
			}
			maxLength = std::max(maxLength, currentLength);
		}

		return maxLength;
	}
};