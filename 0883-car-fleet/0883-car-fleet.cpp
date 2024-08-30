class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int pN = position.size();
        if (pN <= 1)
            return pN;

        std::vector<std::pair<int, int>> vp;
        for (int i = 0; i < pN; i++) {
            vp.push_back(std::make_pair(position[i], speed[i]));
        }

        std::sort(
            vp.begin(), vp.end(),
            [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
                return a.first > b.first;
            });

        int fleets = 0;
        double lastTime = -1.0;

        for (int i = 0; i < vp.size(); i++) {
            double reachDest = (target - vp[i].first) / (double)vp[i].second;
            if (reachDest > lastTime) {
                fleets++;
                lastTime = reachDest;
            }
        }

        return fleets;
    }
};