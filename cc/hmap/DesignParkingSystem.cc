#include <unordered_map>

#define CarTypeBig    1
#define CarTypeMedium 2
#define CarTypeSmall  3

using namespace std;

/**
 * LeetCode 1603. Design Parking System
 * https://leetcode.com/problems/design-parking-system/
 */
class ParkingSystem {
public:
    ParkingSystem(int big, int medium, int small) {
        hmap[CarTypeBig] = big;
        hmap[CarTypeMedium] = medium;
        hmap[CarTypeSmall] = small;
    }
    bool addCar(int carType) {
        if (hmap[carType] > 0) {
            hmap[carType] -= 1;
            return true;
        }
        return false;
    }
private:
    unordered_map<int, int> hmap;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
