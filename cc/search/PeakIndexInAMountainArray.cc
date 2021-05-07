#include <vector>

using namespace std;

/**
 * LeetCode 852. Peak Index in a Mountain Array
 * https://leetcode.com/problems/peak-index-in-a-mountain-array/
 */
class PeakIndexInAMountainArray {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return binarySearch(arr, 0, arr.size() - 1);
    }
private:
    int binarySearch(vector<int>& arr, int left, int right) {
        int mid = 0;
        while (left < right) {
            mid = (left + right) / 2;
            if (arr[mid] < arr[mid + 1]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
