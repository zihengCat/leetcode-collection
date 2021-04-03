#include <string>

using namespace std;

/**
 * LeetCode 1812. Determine Color of a Chessboard Square
 * https://leetcode.com/problems/determine-color-of-a-chessboard-square/
 */
class DetermineColorOfAChessboardSquare {
public:
    bool squareIsWhite(string coordinates) {
        if (coordinates.size() != 2) {
            return false;
        }
        return ((coordinates[0] - 'a') + (coordinates[1] - '1')) % 2 == 1;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
