/**
 * LeetCode 1518. Water Bottles
 * https://leetcode.com/problems/water-bottles/
 */
class WaterBottles {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int bottlesSum = numBottles;
        int remainder = 0;
        while (numBottles >= numExchange) {
            remainder = numBottles % numExchange;
            numBottles /= numExchange;
            bottlesSum += numBottles;
            numBottles += remainder;
        }
        return bottlesSum;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
