#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2215. Find the Difference of Two Arrays
 * https://leetcode.com/problems/find-the-difference-of-two-arrays/
 */
class FindTheDifferenceOfTwoArrays {
public:
    vector<vector<int> > findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int> > v(2);
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        findDiff(s1, s2, v[0]);
        findDiff(s2, s1, v[1]);
        return v;
    }
private:
    void findDiff(unordered_set<int>& s1, unordered_set<int>& s2, vector<int>& v) {
        for (unordered_set<int>::iterator iter = s1.begin();
            iter != s1.end();
            iter++
        ) {
            if (s2.find(*iter) == s2.end()) {
                v.push_back(*iter);
            }
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
