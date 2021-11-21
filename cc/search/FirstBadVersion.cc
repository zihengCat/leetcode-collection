// The API isBadVersion is defined for you.
bool isBadVersion(int version);

/**
 * LeetCode 278. First Bad Version
 * https://leetcode.com/problems/first-bad-version/
 */
class FirstBadVersion {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
