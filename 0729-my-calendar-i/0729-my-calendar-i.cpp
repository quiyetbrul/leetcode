class MyCalendar {
public:
    MyCalendar() {}

    bool book(int start, int end) {
        auto next = intervals.lower_bound(start); // Find next interval
        if (next != intervals.end() && next->first < end) {
            return false; // Overlaps with next interval
        }
        if (next != intervals.begin() && std::prev(next)->second > start) {
            return false; // Overlaps with previous interval
        }
        intervals[start] = end; // No overlap, add interval
        return true;
    }

private:
    std::map<int, int> intervals;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */