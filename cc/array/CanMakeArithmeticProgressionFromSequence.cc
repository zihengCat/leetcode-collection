#include <vector>

using namespace std;

/**
 * LeetCode 1502. Can Make Arithmetic Progression From Sequence
 * https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
 */
class CanMakeArithmeticProgressionFromSequence {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() < 2) {
            return true;
        }
        quickSort(arr, 0, arr.size() - 1);
        int diff = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] != diff) {
                return false;
            }
        }
        return true;
    }
private:
    void quickSort(vector<int>& arr, int left, int right) {
        if (left >= right) {
            return;
        }
        int i = doPartition(arr, left, right);
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
    int doPartition(vector<int>& arr, int left, int right) {
        int pivot = arr[left];
        int pLeft = left;
        int pRight = right;
        for (/* ... */; pLeft < pRight; /* .. */) {
            while (arr[pRight] > pivot && pLeft < pRight) {
                pRight--;
            }
            while (arr[pLeft] <= pivot && pLeft < pRight) {
                pLeft++;
            }
            doSwap(arr, pLeft, pRight);
        }
        doSwap(arr, left, pLeft);
        return pLeft;
    }
    void doSwap(vector<int>& arr, int i, int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
