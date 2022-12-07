#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2404. Most Frequent Even Element
 * https://leetcode.com/problems/most-frequent-even-element/
 */
class MostFrequentEvenElement {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) { // isEven
                m[nums[i]]++;
            }
        }
        int mostN = -1;
        int mostF = 0;
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            if (iter -> second > mostF) {
                mostF = iter -> second;
                mostN = iter -> first;
            }
            if (iter -> second == mostF) {
                mostN = min(mostN, iter -> first);
            }
        }
        return mostN;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
