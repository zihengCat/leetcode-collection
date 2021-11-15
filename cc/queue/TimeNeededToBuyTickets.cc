#include <vector>

using namespace std;

/**
 * LeetCode 2073. Time Needed to Buy Tickets
 * https://leetcode.com/problems/time-needed-to-buy-tickets/
 */
class TimeNeededToBuyTickets {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timeCnt = 0;
        while (tickets[k] != 0) {
            for (int i = 0; i < tickets.size(); i++) {
                if (tickets[i] == 0) {
                    continue;
                }
                if (tickets[k] == 0) {
                    return timeCnt;
                }
                tickets[i] -= 1;
                timeCnt += 1;
            }
        }
        return timeCnt;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
