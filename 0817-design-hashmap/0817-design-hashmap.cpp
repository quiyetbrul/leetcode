#include <vector>
#include <utility> // for std::pair

class MyHashMap {
private:
    std::vector<int> mp;

public:
    MyHashMap() {
        mp.resize(1000001, -1);
    }
    
    void put(int key, int value) {
        mp[key] = value;
    }
    
    int get(int key) {
        return mp[key] != -1 ? mp[key] : -1;
    }
    
    void remove(int key) {
        mp[key] = - 1;
    }
};
