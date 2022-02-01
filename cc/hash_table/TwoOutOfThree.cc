#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2032. Two Out of Three
 * https://leetcode.com/problems/two-out-of-three/
 */
class TwoOutOfThree {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> hmap;
        addToMap(nums1, hmap);
        addToMap(nums2, hmap);
        addToMap(nums3, hmap);
        return filterMap(hmap);
    }
private:
    vector<int> filterMap(unordered_map<int, int>& hmap) {
        vector<int> v;
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second >= 2) {
                v.push_back(iter -> first);
            }
        }
        return v;
    }

    void addToMap(vector<int>& arr, unordered_map<int, int>& hmap) {
        unordered_set<int> hset;
        for (int i = 0; i < arr.size(); i++) {
            hset.insert(arr[i]);
        }
        for (unordered_set<int>::iterator iter = hset.begin();
            iter != hset.end();
            iter++
        ) {
            hmap[*iter]++;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
