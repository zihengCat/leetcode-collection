#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 1346. Check If N and Its Double Exist
 * https://leetcode.com/problems/check-if-n-and-its-double-exist/
 */
class CheckIfNAndItsDoubleExist {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> s;
        for (int i = 0; i < arr.size(); i++) {
            if ((s.find(arr[i] * 2) != s.end()) ||
                (arr[i] % 2 == 0 && s.find(arr[i] / 2) != s.end())) {
                return true;
            }
            s.insert(arr[i]);
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
