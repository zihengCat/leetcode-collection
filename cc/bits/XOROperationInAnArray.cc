/**
 * LeetCode 1486. XOR Operation in an Array
 * https://leetcode.com/problems/xor-operation-in-an-array/
 */
class XOROperationInAnArray {
public:
    int xorOperation(int n, int start) {
        int r = start;
        for (int i = 1; i < n; i++) {
            r ^= start + 2 * i;
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
