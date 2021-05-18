#include <vector>
#include <algorithm>

using namespace std;

/**
 * LeetCode 455. Assign Cookies
 * https://leetcode.com/problems/assign-cookies/
 */
class AssignCookies {
public:
    int findContentChildren(vector<int>& children, vector<int>& cookies) {
        sort(children.begin(), children.end());
        sort(cookies.begin(), cookies.end());
        int cnt = 0;
        int childSize = children.size();
        int cookieSize = cookies.size();
        for (int childIdx = 0, cookieIdx = 0;
            childIdx < childSize && cookieIdx < cookieSize;
            /* ... */) {
            if (children[childIdx] <= cookies[cookieIdx]) {
                childIdx++;
                cnt++;
            }
            cookieIdx++;
        }
        return cnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
