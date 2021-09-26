#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

/**
 * 2007. Find Original Array From Doubled Array
 * https://leetcode.com/problems/find-original-array-from-doubled-array/
 */
class FindOriginalArrayFromDoubledArray {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> dummy;
        vector<int> r;
        if (changed.size() % 2 == 1) {
            return dummy;
        }
        unordered_map<int, int> hmap;
        vector<int> sortedKeys;
        for (int i = 0; i < changed.size(); i++) {
            hmap[changed[i]]++;
        }
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            sortedKeys.push_back(iter -> first);
        }
        sort(sortedKeys.begin(), sortedKeys.end());
        int k = 0;
        for (int i = 0; i < sortedKeys.size(); i++) {
            k = sortedKeys[i];
            if (hmap[k] > hmap[2 * k]) {
                return dummy;
            }
            for (int j = 0; j < hmap[k]; j++) {
                // hmap[k]--;
                hmap[k * 2]--;
                r.push_back(k);
            }
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
