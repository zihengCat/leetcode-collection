#include <vector>

using namespace std;

/**
 * LeetCode 477. Total Hamming Distance
 * https://leetcode.com/problems/total-hamming-distance/
 */
class TotalHammingDistance {
public:
    int totalHammingDistance(vector<int>& nums) {
        int cnt = 0;
        int mask = 0;
        int zeroCnt = 0;
        int oneCnt = 0;
        int vLen = nums.size();
        for (int i = 0; i < 32; i++) {
            mask = 1 << i;
            zeroCnt = 0;
            oneCnt = 0;
            for (int j = 0; j < vLen; j++) {
                if ((nums[j] & mask) != 0) {
                    oneCnt++;
                } else {
                    zeroCnt++;
                }
            }
            cnt += zeroCnt * oneCnt;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
