#include <vector>

using namespace std;

/**
 * LeetCode 1450. Number of Students Doing Homework at a Given Time
 * https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
 */
class NumberOfStudentsDoingHomeworkAtAGivenTime {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        return busyStudentNormal(startTime, endTime, queryTime);
    }
private:
    int busyStudentNormal(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int cnt = 0;
        int n = startTime.size();
        for (int i = 0; i < n; i++) {
            if (queryTime >= startTime[i] && queryTime <= endTime[i]) {
                cnt++;
            }
        }
        return cnt;
    }
    int busyStudentWithBitMap(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int bitMap[1001] = {0, };
        int n = startTime.size();
        for (int i = 0; i < n; i++) {
            for (int j = startTime[i]; j <= endTime[i]; j++) {
                bitMap[j]++;
            }
        }
        return bitMap[queryTime];
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

