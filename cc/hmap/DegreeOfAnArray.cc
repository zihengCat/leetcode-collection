#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 697. Degree of an Array
 * https://leetcode.com/problems/degree-of-an-array/
 */
class DegreeOfAnArray {
public:
    int findShortestSubArray(vector<int>& nums) {
        int vLen = nums.size();
        unordered_map<int, int> hmap;
        // Add to Hash Table
        for (int i = 0; i < vLen; i++) {
            hmap[nums[i]]++;
        }
        // Find maximum frequency element
        int maxFrequency = INT32_MIN;
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second > maxFrequency) {
                maxFrequency = iter -> second;
            }
        }
        vector<int> maxElements;
        for (unordered_map<int, int>::iterator iter = hmap.begin();
            iter != hmap.end();
            iter++
        ) {
            if (iter -> second == maxFrequency) {
                maxElements.push_back(iter -> first);
            }
        }
        // Find smallest possible length of a contiguous subarray
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
