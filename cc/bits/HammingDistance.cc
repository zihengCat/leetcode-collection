/**
 * LeetCode 461. Hamming Distance
 * https://leetcode.com/problems/hamming-distance/
 */
class HammingDistance {
public:
    int hammingDistance(int x, int y) {
        int xorN = x ^ y;
        int mask = 0x01;
        int dis = 0;
        for (int i = 0; i < 32; i++) {
            dis += xorN & mask;
            xorN >>= 1;
        }
        return dis;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
