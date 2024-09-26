class MyCalendar {
public:
    MyCalendar() {}

    bool book(int start, int end) {
        for (const auto& interval : bookings) {
            if (std::max(interval.first, start) <
                std::min(interval.second, end)) {
                return false; // Overlap detected
            }
        }
        bookings.emplace_back(start, end);
        return true;
    }

private:
    std::vector<std::pair<int, int>> bookings;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */