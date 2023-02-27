#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 2540. Minimum Common Value
 * https://leetcode.com/problems/minimum-common-value/
 */
class MinimumCommonValue {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        vector<int> v = findCommon(a, b);
        return findMinimum(v);
    }
private:
    vector<int> findCommon(vector<int>& a, vector<int>& b) {
        vector<int> v;
        unordered_set<int> s;
        for (int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }
        for (int i = 0; i < b.size(); i++) {
            if (s.find(b[i]) != s.end()) {
                v.push_back(b[i]);
            }
        }
        return v;
    }
    int findMinimum(vector<int> a) {
        if (a.size() == 0) {
            return -1;
        }
        int n = a[0];
        for (int i = 0; i < a.size(); i++) {
            if (a[i] < n) {
                n = a[i];
            }
        }
        return n;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
