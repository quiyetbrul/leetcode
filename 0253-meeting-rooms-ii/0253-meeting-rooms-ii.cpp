/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        if(intervals.empty()) return 0;

        std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b){return a.start < b.start;});

        std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

        for(const auto& interval : intervals){
            int start = interval.start;
            int end = interval.end;

            if(!pq.empty() && pq.top() <= start) pq.pop();

            pq.push(end);
        }

        return pq.size();
    }
};
