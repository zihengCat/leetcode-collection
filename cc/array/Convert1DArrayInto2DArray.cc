#include <vector>

using namespace std;

/**
 * LeetCode 2022. Convert 1D Array Into 2D Array
 * https://leetcode.com/problems/convert-1d-array-into-2d-array/
 */
class Convert1DArrayInto2DArray {
public:
    vector<vector<int> > construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) {
            return vector<vector<int> >();
        }
        vector<vector<int> > vec;
        vector<int> tmp;
        for (int i = 0; i < original.size(); /* ... */) {
            for (int j = 0; j < n; j++) {
                tmp.push_back(original[i]);
                i++;
            }
            vec.push_back(tmp);
            tmp.clear();
        }
        return vec;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
