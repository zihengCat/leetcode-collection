#include <vector>

using namespace std;

/**
 * LeetCode 941. Valid Mountain Array
 * https://leetcode.com/problems/valid-mountain-array/solution/
 */
class ValidMountainArray {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while (i + 1 < n && arr[i] < arr[i + 1]) {
            i++;
        }
        if (i == 0 || i == n - 1) {
            return false;
        }
        while (i + 1 < n && arr[i] > arr[i + 1]) {
            i++;
        }
        return i == n - 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
