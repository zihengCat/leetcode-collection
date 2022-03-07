#include <vector>
#include <deque>

using namespace std;

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 */
class NestedInteger {
public:
    // Return true if this NestedInteger holds a single integer, rather than a nested list.
    bool isInteger() const;

    // Return the single integer that this NestedInteger holds, if it holds a single integer
    // The result is undefined if this NestedInteger holds a nested list
    int getInteger() const;

    // Return the nested list that this NestedInteger holds, if it holds a nested list
    // The result is undefined if this NestedInteger holds a single integer
    const vector<NestedInteger> &getList() const;
};

/**
 * LeetCode 341. Flatten Nested List Iterator
 * https://leetcode.com/problems/flatten-nested-list-iterator/
 */
class NestedIterator {
private:
    deque<int> aDeque;
    void flattenNestedList(vector<NestedInteger>& netstedList) {
        int vLen = netstedList.size();
        for (int i = 0; i < vLen; i++) {
            NestedInteger& currentNode = netstedList[i];
            if (currentNode.isInteger()) {
                aDeque.push_back(currentNode.getInteger());
            } else {
                flattenNestedList(currentNode.getList());
            }
        }
    }
public:
    NestedIterator(vector<NestedInteger> &nestedList) {
        aDeque = deque<int>();
        flattenNestedList(nestedList);
    }
    int next() {
        int r = aDeque.front();
        aDeque.pop_front();
        return r;
    }
    bool hasNext() {
        return aDeque.size() != 0;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */
int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
