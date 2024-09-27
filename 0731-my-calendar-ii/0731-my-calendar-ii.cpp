class MyCalendarTwo {
private:
    std::vector<std::pair<int, int>> b;
    std::vector<std::pair<int, int>> db;

public:
    MyCalendarTwo() {}

    bool book(int start, int end) {

        for (const auto& x : db) {
            if (start < x.second && end > x.first)
                return false;
        }
        for (const auto& x : b) {
            if (start < x.second && end > x.first) {
                db.push_back({max(start, x.first), min(end, x.second)});
            }
        }
        b.push_back({start, end});
        return true;
    }
};