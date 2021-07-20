#include <vector>

using namespace std;

/**
 * LeetCode 1922. Count Good Numbers
 * https://leetcode.com/problems/count-good-numbers/
 */
class CountGoodNumbers {
public:
    int countGoodNumbers(int n) {
        long long cnt = 0;
        vector<int> evenList, oddList;
        fillEven(evenList);
        fillOdd(oddList);
        countNum(0, n, evenList, oddList, &cnt);
        return cnt % (1e9 + 7);
    }
private:
    void countNum(int idx, int n, vector<int>& evenList, vector<int>& oddList, long long* cnt) {
        if (idx >= n) {
            *cnt += 1;
            return;
        }
        switch (idx % 2) {
        case 0:
            for (int i = 0; i < evenList.size(); i++) {
                countNum(idx + 1, n, evenList, oddList, cnt);
            }
            break;
        case 1:
            for (int i = 0; i < oddList.size(); i++) {
                countNum(idx + 1, n, evenList, oddList, cnt);
            }
            break;
        }
    }
    void fillOdd(vector<int>& arr) {
        arr.push_back(2);
        arr.push_back(3);
        arr.push_back(5);
        arr.push_back(7);
    }
    void fillEven(vector<int>& arr) {
        arr.push_back(0);
        arr.push_back(2);
        arr.push_back(4);
        arr.push_back(6);
        arr.push_back(8);
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */