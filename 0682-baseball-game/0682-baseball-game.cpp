class Solution {
public:
  int calPoints(std::vector<std::string> &ops) {
    //// VECTOR
    // std::vector<int> record;
    // for (auto i : operations) {
    //     if (i == "C") {
    //         if (!record.empty()) {
    //             record.pop_back();
    //         }
    //     } else if (i == "D") {
    //         if (!record.empty()) {
    //             record.push_back(record.back() * 2);
    //         }
    //     } else if (i == "+") {
    //         if (record.size() >= 2) {
    //             record.push_back(record.back() + record[record.size() - 2]);
    //         }
    //     } else {
    //         try {
    //             record.push_back(std::stoi(i));
    //         } catch (const std::invalid_argument& e) {
    //             std::cerr << "Invalid input: " << i << std::endl;
    //         }
    //     }
    // }
    // return std::accumulate(record.begin(), record.end(), 0);

    //// OR STACK BASED
    int value1;
    int value2;
    int ans = 0;
    std::stack<int> stk;

    for (std::string i : ops) {
      if (i == "C") {
        stk.pop();
      } else if (i == "D") {
        stk.push(stk.top() * 2);
      } else if (i == "+") {
        value1 = stk.top();
        stk.pop();
        value2 = stk.top();
        stk.push(value1);
        stk.push(value1 + value2);
      } else {
        stk.push(stoi(i)); // stoi() to convert string into integer
      }
    }
    while (!stk.empty()) {
      ans += stk.top();
      stk.pop();
    }
    return ans;
  }
};
