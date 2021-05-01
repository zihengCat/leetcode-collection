#include <string>
#include <unordered_set>
#include <utility>

using namespace std;

struct pairHasher {
    std::hash<int> intHasher;
    std::size_t operator()(const std::pair<int, int>& v) const {
        return intHasher(v.first) ^ intHasher(v.second);
    }
};

/**
 * LeetCode 1496. Path Crossing
 * https://leetcode.com/problems/path-crossing/
 */
class PathCrossing {
public:
    bool isPathCrossing(string path) {
        int x = 0;
        int y = 0;
        unordered_set<pair<int, int>, pairHasher> aSet;
        pair<int, int> aPair(x, y);
        aSet.insert(aPair);
        for (int i = 0; i < path.size(); i++) {
            switch (path[i]) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            default:
                return false;
            }
            aPair.first = x;
            aPair.second = y;
            if (aSet.find(aPair) != aSet.end()) {
                return true;
            }
            aSet.insert(aPair);
        }
        return false;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
