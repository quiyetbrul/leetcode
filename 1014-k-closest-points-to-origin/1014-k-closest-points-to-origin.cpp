class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        std::vector<std::vector<int>> results;

        // Priority queue to store pairs of distance and points
        std::priority_queue<std::pair<int, std::vector<int>>> pq;

        for (const auto& point : points) {
            int x = point[0];
            int y = point[1];
            int dist = x * x + y * y; // Use squared distance to avoid precision issues

            if (pq.size() < k) {
                pq.push({dist, point});
            } else if (dist < pq.top().first) {
                pq.pop();
                pq.push({dist, point});
            }
        }

        // Extract the k closest points from the priority queue
        while (!pq.empty()) {
            results.push_back(pq.top().second);
            pq.pop();
        }

        return results;
    }
};