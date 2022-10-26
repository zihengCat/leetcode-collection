#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 1239. Maximum Length of a Concatenated String with Unique Characters
 * https://leetcode.com/problems/maximum-length-of-a-concatenated-string-with-unique-characters/
 */
class MaximumLengthOfAConcatenatedStringWithUniqueCharacters {
public:
    int maxLength(vector<string>& arr) {
        return dp(arr, "", 0);
    }
private:
    int dp(vector<string>& arr, string s, int i) {
        if (!isUnique(s)) {
            return 0;
        }
        if (i >= arr.size()) {
            return s.size();
        }
        int a = dp(arr, s, i + 1);
        int b = dp(arr, s + arr[i], i + 1);
        return max(a, b);
    }
    bool isUnique(string& a) {
        unordered_set<char> s;
        for (int i = 0; i < a.size(); i++) {
            if (s.find(a[i]) != s.end()) {
                return false;
            }
            s.insert(a[i]);
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
