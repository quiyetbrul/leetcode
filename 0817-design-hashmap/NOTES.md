# Thought Process

Initial thought was to create an `std::vector<std::pair<bool, int>>` to keep track of what's already added and it's value

```c++
#include <vector>
#include <utility> // for std::pair

class MyHashMap {
private:
    std::vector<std::pair<bool, int>> mp;

public:
    MyHashMap() {
        mp.resize(1000001, std::make_pair(false, -1));
    }

    void put(int key, int value) {
        if (!mp[key].first)
            mp[key].first = true;

        mp[key].second = value;
    }

    int get(int key) {
        return !mp[key].first ? -1 : mp[key].second;
    }

    void remove(int key) {
        if (mp[key].first) {
            mp[key].first = false;
            mp[key].second = -1;
        }
    }
};

```

Turns out `std::vector<int>` will suffice, given the constraints

```c++
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
        return mp[key] != -1 ? mp[key] : -1
    }

    void remove(int key) {
        mp[k] = - 1;
    }
};

```
