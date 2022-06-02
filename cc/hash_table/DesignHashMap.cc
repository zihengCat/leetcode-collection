#include <vector>

using namespace std;

/**
 * LeetCode 706. Design HashMap
 * https://leetcode.com/problems/design-hashmap/
 */
class MyHashMap {
private:
    int v[1 * 1000 * 1000 + 1];
public:
    MyHashMap() {
        int n = sizeof(v) / sizeof(v[0]);
        for (int i = 0; i < n; i++) {
            v[i] = -1;
        }
    }

    void put(int key, int value) {
        v[key] = value;
    }

    int get(int key) {
        return v[key];
    }

    void remove(int key) {
        v[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
