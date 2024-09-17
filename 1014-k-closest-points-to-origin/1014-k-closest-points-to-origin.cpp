class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> results;

        // Max-heap to store pairs of distance and points
        // Using max-heap so that the largest element is on top, to be replaced
        // when necessary
        priority_queue<pair<int, vector<int>>> pq;

        for (const auto& point : points) {
            int x = point[0];
            int y = point[1];
            int dist = x * x + y * y;
            // Push the current point and its distance into the
            // priority queue
            pq.push({dist, point});
            // If the size of the priority queue exceeds k, remove the farthest
            // point
            if (pq.size() > k)
                pq.pop();
        }

        // Extract the k closest points from the priority queue
        while (!pq.empty()) {
            results.push_back(pq.top().second);
            pq.pop();
        }

        return results;
    }
};
