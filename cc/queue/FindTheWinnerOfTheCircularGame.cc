#include <deque>

using namespace std;

/**
 * LeetCode 1823. Find the Winner of the Circular Game
 * https://leetcode.com/problems/find-the-winner-of-the-circular-game/
 */
class FindTheWinnerOfTheCircularGame {
public:
    int findTheWinner(int n, int k) {
        if (n < 0 || k < 0) {
            return 0;
        }
        deque<int> aDeque;
        for (int i = 1; i <= n; i++) {
            aDeque.push_back(i);
        }
        while (aDeque.size() > 1) {
            int d = k - 1;
            int e = 0;
            while (d > 0) {
                e = *aDeque.begin();
                aDeque.pop_front();
                aDeque.push_back(e);
                d--;
            }
            aDeque.pop_front();
        }
        return *aDeque.begin(); 
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
