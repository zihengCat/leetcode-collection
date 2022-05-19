#include <string>

using namespace std;

/**
 * LeetCode 2269. Find the K-Beauty of a Number
 * https://leetcode.com/problems/find-the-k-beauty-of-a-number/
 */
class FindTheKBeautyOfANumber {
public:
    int divisorSubstrings(int num, int k) {
        int cnt = 0;
        string s = to_string(num);
        int n = 0;;
        for (int i = 0 + k - 1; i < s.size(); i++) {
            n = stoi(s.substr(i - k + 1, k));
            if (n != 0 && num % n == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
