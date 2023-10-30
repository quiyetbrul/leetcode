class Solution {
public:
    int calPoints(vector<string>& operations) {
    std::vector<int> record;
        
    for (auto i : operations) {
        if (i == "C") {
            if (!record.empty()) {
                record.pop_back();
            }
        } else if (i == "D") {
            if (!record.empty()) {
                record.push_back(record.back() * 2);
            }
        } else if (i == "+") {
            if (record.size() >= 2) {
                record.push_back(record[record.size() - 1] + record[record.size() - 2]);
            }
        } else {
            try {
                record.push_back(std::stoi(i));
            } catch (const std::invalid_argument& e) {
                std::cerr << "Invalid input: " << i << std::endl;
            }

        }
    }
    
    return std::accumulate(record.begin(), record.end(), 0);
}

};