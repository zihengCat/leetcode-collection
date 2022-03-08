#include <vector>

using namespace std;

/**
 * LeetCode 1089. Duplicate Zeros
 * https://leetcode.com/problems/duplicate-zeros/
 */
class DuplicateZeros {
public:
    void duplicateZeros(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                shiftRight(arr, i);
                i++;
            }
        }
    }
private:
    void shiftRight(vector<int>& arr, int idx) {
        int i = arr.size() - 1;
        int j = i - 1;
        while (i >= idx && j >= idx) {
            arr[i] = arr[j];
            i--;
            j--;
        }
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
