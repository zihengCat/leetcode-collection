#include <vector>

using namespace std;

/**
 * LeetCode 2469. Convert the Temperature
 * https://leetcode.com/problems/convert-the-temperature/
 */
class ConvertTheTemperature {
public:
    vector<double> convertTemperature(double c) {
        vector<double> v;
        v.push_back(c + 273.15);
        v.push_back(c * 1.80 + 32.00);
        return v;
    }
};

int main() {
    // ...
}

/* EOF */
