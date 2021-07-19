#include <vector>

using namespace std;

/**
 * LeetCode 744. Find Smallest Letter Greater Than Target
 * https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 */
class FindSmallestLetterGreaterThanTarget {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (target < letters[0] || target >= letters[letters.size() - 1]) {
            return letters[0];
        }
        return binarySearch(letters, target);
    }
private:
    char binarySearch(vector<char>& arr, char c) {
        int lo = 0, hi = arr.size() - 1;
        int mid = 0;
        while (lo < hi) {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] > c) {
                hi = mid;
            } else if (arr[mid] <= c) {
                lo = mid + 1;
            }
        }
        return arr[hi];
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
