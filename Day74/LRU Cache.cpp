#solution
#include <bits/stdc++.h>
using namespace std;

class LRUCache {
    int cap;
    list<int> dq;
    unordered_map<int, pair<int, list<int>::iterator>> mp;
public:
    LRUCache(int capacity) { cap = capacity; }
    
    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;
        dq.erase(mp[key].second);
        dq.push_front(key);
        mp[key].second = dq.begin();
        return mp[key].first;
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            dq.erase(mp[key].second);
        } else if (dq.size() == cap) {
            int last = dq.back();
            dq.pop_back();
            mp.erase(last);
        }
        dq.push_front(key);
        mp[key] = {value, dq.begin()};
    }
};

int main() {
    // Problem: LRU Cache
    return 0;
}
