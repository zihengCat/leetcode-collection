#include <vector>
#include <unordered_set>

using namespace std;

/**
 * LeetCode 414. Third Maximum Number
 * https://leetcode.com/problems/third-maximum-number/
 */
class ThirdMaximumNumber {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> v = removeDuplicates(nums);
        quickSort(v, 0, v.size() - 1);
        if (v.size() < 3) {
            return v[0];
        }
        return v[2];
    }
private:
    vector<int> removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(nums[i]) == s.end()) {
                v.push_back(nums[i]);
                s.insert(nums[i]);
            }
        }
        return v;
    }
    void quickSort(vector<int>& arr, int l, int r) {
        if (l >= r) {
            return;
        }
        int i = doPartition(arr, l, r);
        quickSort(arr, l, i - 1);
        quickSort(arr, i + 1, r);
    }
    int doPartition(vector<int>& arr, int l, int r) {
        int pivot = arr[l];
        int pl = l;
        int pr = r;
        for (/* ... */; pl < pr; /* ... */) {
            while (pl < pr && arr[pr] <= arr[pl]) {
                pr--;
            }
            while (pl < pr && arr[pl] > arr[pr]) {
                pl--;
            }
            doSwap(arr, pl, pr);
        }
        doSwap(arr, l, pl);
        return pl;
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
