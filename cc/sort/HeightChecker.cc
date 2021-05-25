#include <vector>

using namespace std;

/**
 * LeetCode 1051. Height Checker
 * https://leetcode.com/problems/height-checker/
 */
class HeightChecker {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedHeights = copy(heights);
        quickSort(sortedHeights, 0, sortedHeights.size() - 1);
        return diff(heights, sortedHeights);
    }
private:
    int diff(vector<int>& a, vector<int>& b) {
        int cnt = 0;
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] != b[i]) {
                cnt++;
            }
        }
        return cnt;
    }
    vector<int> copy(vector<int>& src) {
        vector<int> dst;
        int n = src.size();
        for (int i = 0; i < n; i++) {
            dst.push_back(src[i]);
        }
        return dst;
    }
    void quickSort(vector<int>& arr, int left, int right) {
        if (left > right) {
            return;
        }
        int i = partition(arr, left, right);
        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
    int partition(vector<int>& arr, int left, int right) {
        int pivot = arr[left];
        int pLeft = left;
        int pRight = right;
        for (/* ... */; pLeft < pRight; /* ... */) {
            while (arr[pRight] > pivot && pLeft < pRight) {
                pRight--;
            }
            while (arr[pLeft] <= pivot && pLeft < pRight) {
                pLeft++;
            }
            swap(arr, pLeft, pRight);
        }
        swap(arr, left, pLeft);
        return pLeft;
    }
    void swap(vector<int>& arr, int i , int j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
};

int main(int argc, char const *argv[]) {
    /*
    HeightChecker obj = HeightChecker();
    vector<int> arr = {
        1,1,4,2,1,3,
    };
    obj.quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        printf("%d ", arr[i]);
    }
    */
    // ...
    return 0;
}

/* EOF */
