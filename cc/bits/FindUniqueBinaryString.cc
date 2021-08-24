#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 1980. Find Unique Binary String
 * https://leetcode.com/problems/find-unique-binary-string/
 */
class FindUniqueBinaryString {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        string r;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            r += nums[i][i] == '0' ? '1' : '0';
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
