#include <vector>

using namespace std;

/**
 * LeetCode 1720. Decode XORed Array
 * https://leetcode.com/problems/decode-xored-array/
 */
class DecodeXORedArray {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        if (encoded.size() == 0) {
            return encoded;
        }
        int vLen = encoded.size() + 1;
        vector<int> origin = vector<int>(vLen);
        origin[0] = first;
        for (int i = 1; i < vLen; i++) {
            origin[i] = origin[i - 1] ^ encoded[i - 1];
        }
        return origin;
    }
};

/* EOF */

