#include <map>

using namespace std;

/**
 * LeetCode 1742. Maximum Number of Balls in a Box
 * https://leetcode.com/problems/maximum-number-of-balls-in-a-box/
 */
class MaximumNumberOfBallsInABox {
public:
    int countBalls(int lowLimit, int highLimit) {
        if (highLimit < lowLimit) {
            return 0;
        }
        map<int, int> aMap;
        for (int i = lowLimit; i <= highLimit; i++) {
            int digitsSum = calculateDigitsSum(i);
            if (aMap.find(digitsSum) != aMap.end()) {
                aMap[digitsSum] += 1;
            } else {
                aMap[digitsSum] = 1;
            }
        }
        int maximumCnt = 0;
        for (map<int, int>::iterator iter = aMap.begin();
            iter != aMap.end();
            iter++
        ) {
            if (iter -> second > maximumCnt) {
                maximumCnt = iter -> second;
            }
        }
        return maximumCnt;
    }
private:
    int calculateDigitsSum(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
