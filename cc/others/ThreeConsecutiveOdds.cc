#include <vector>

using namespace std;

/**
 * LeetCode 1550. Three Consecutive Odds
 * https://leetcode.com/problems/three-consecutive-odds/
 */
class ThreeConsecutiveOdds {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int vLen = arr.size();
        if (vLen < 3) {
            return false;
        }
        for (int i = 2; i < vLen; i++) {
            if (isOdd(arr[i])
                && isOdd(arr[i - 1])
                && isOdd(arr[i - 2])) {
                return true;
            }
        }
        return false;
    }
private:
    bool isOdd(int n) {
        return n % 2 == 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
