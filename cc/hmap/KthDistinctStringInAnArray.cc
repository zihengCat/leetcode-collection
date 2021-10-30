#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2053. Kth Distinct String in an Array
 * https://leetcode.com/problems/kth-distinct-string-in-an-array/
 */
class KthDistinctStringInAnArray {
public:
    string kthDistinct(vector<string>& arr, int k) {
        vector<string> v = doDistinct(arr);
        return k < 0 || k > v.size() ? "" : v[k - 1];
    }
private:
    vector<string> doDistinct(vector<string>& arr) {
        unordered_map<string, int> m;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            m[arr[i]]++;
        }
        vector<string> v;
        for (int i = 0; i < n; i++) {
            if (m[arr[i]] == 1) {
                v.push_back(arr[i]);
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
