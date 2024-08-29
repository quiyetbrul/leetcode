class Solution {
public:
    // time o(n*m(average)) | space o(n)
    vector<string> printVertically(string s) {
        std::vector<std::string> words;
        std::istringstream iss(s);
        std::string word;
        int maxLength = 0;
        while (iss >> word) {
            words.push_back(word);
            maxLength = std::max(maxLength, (int)word.size());
        }

        std::vector<std::string> result(maxLength, std::string(words.size(), ' '));
        // {"   ", "   ", "   "}

        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].size(); ++j) {
                result[j][i] = words[i][j];
            }
        }

        for (std::string& col : result) {
            while (!col.empty() && col.back() == ' ') {
                col.pop_back();
            }
        }

        return result;
    }
};