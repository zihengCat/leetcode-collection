#include <vector>
#include <string>

using namespace std;

/**
 * LeetCode 2011. Final Value of Variable After Performing Operations
 * https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
 */
class FinalValueOfVariableAfterPerformingOperations {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int v = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "++X" || operations[i] == "X++") {
                v++;
            } else if (operations[i] == "--X" || operations[i] == "X--") {
                v--;
            }
        }
        return v;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
