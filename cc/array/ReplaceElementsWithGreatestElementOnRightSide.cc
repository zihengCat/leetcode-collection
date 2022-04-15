#include <vector>

using namespace std;

/**
 * LeetCode 1299. Replace Elements with Greatest Element on Right Side
 * https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
 */
class ReplaceElementsWithGreatestElementOnRightSide {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxVal = -1;
        int curVal = 0;
        for (int i = arr.size() - 1; i >= 0; i--) {
            curVal = arr[i];
            arr[i] = maxVal;
            maxVal = max(curVal, maxVal);
        }
        return arr;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
