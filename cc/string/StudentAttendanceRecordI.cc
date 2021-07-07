#include <string>

using namespace std;

/**
 * LeetCode 551. Student Attendance Record I
 * https://leetcode.com/problems/student-attendance-record-i/
 */
class StudentAttendanceRecordI {
public:
    bool checkRecord(string s) {
        int aCnt = 0;
        int clCnt = 0;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            switch (s[i]) {
            case 'A':
                aCnt++;
                break;
            case 'L':
                clCnt++;
                break;
            default:
                break;
            }
            if (aCnt >= 2 || clCnt >= 3) {
                return false;
            }
            if (s[i] != 'L') {
                clCnt = 0;
            }
        }
        return true;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */

