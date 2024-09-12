class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> results;
        for (int i = 0; i < operations.size(); i++)
            if (operations[i] == "C" && !results.empty())
                results.pop_back();
            else if (operations[i] == "D" && !results.empty())
                results.push_back(2 * results.back());
            else if (operations[i] == "+" && results.size() >= 2)
                results.push_back(results[results.size() - 2] + results.back());
            else
                results.push_back(std::stoi(operations[i]));

        return std::accumulate(results.begin(), results.end(), 0);
    }
};