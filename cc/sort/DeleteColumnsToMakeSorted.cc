#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 944. Delete Columns to Make Sorted
 * https://leetcode.com/problems/delete-columns-to-make-sorted/
 */
class DeleteColumnsToMakeSorted {
public:
    int minDeletionSize(vector<string>& strs) {
        int cnt = 0;
        int rowLen = strs.size();
        int colLen = strs[0].size();
        for (int i = 0; i < colLen; i++) {
            for (int j = 1; j < rowLen; j++) {
                if (strs[j - 1][i] > strs[j][i]) {
                    cnt++;
                    break;
                }
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

