#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 350. Intersection of Two Arrays II
 * https://leetcode.com/problems/intersection-of-two-arrays-ii/
 */
class IntersectionOfTwoArraysII {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        vector<int> v;
        unordered_map<int, int> m;
        unordered_map<int, int>::iterator iter;
        for (int i = 0; i < a.size(); i++) {
            m[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++) {
            iter = m.find(b[i]);
            if (iter != m.end() && iter -> second > 0) {
                v.push_back(iter -> first);
                m[b[i]]--;
            }
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
