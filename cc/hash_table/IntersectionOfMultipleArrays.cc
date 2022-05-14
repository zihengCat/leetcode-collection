#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2248. Intersection of Multiple Arrays
 * https://leetcode.com/problems/intersection-of-multiple-arrays/
 */
class IntersectionOfMultipleArrays {
public:
    vector<int> intersection(vector<vector<int> >& nums) {
        vector<int> v;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                m[nums[i][j]]++;
            }
        }
        int cnt = nums.size();
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            if (iter -> second == cnt) {
                v.push_back(iter -> first);
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
