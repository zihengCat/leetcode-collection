#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 496. Next Greater Element I
 * https://leetcode.com/problems/next-greater-element-i/
 */
class NextGreaterElementI {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int, int> hmap;
        int vLen1 = nums1.size();
        int vLen2 = nums2.size();
        for (int i = 0; i < vLen2; i++) {
            hmap[nums2[i]] = i;
        }
        for (int i = 0; i < vLen1; i++) {
            v.push_back(nextGreaterNum(nums2, hmap[nums1[i]]));
        }
        return v;
    }
private:
    int nextGreaterNum(vector<int>& arr, int i) {
        int n = arr[i];
        int vLen = arr.size();
        for (/* ... */; i < vLen; i++) {
            if (arr[i] > n) {
                return arr[i];
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

