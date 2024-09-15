class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> store;

public:
    TimeMap() {}

    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }

    std::string get(string key, int timestamp) {
        if (!store.contains(key) || timestamp < store[key][0].first) {
            return "";
        }

        const auto& values = store[key];
        int left = 0;
        int right = values.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (values[mid].first == timestamp) {
                return values[mid].second;
            } else if (values[mid].first < timestamp) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return values[right].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */