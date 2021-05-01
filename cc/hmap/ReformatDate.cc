#include <string>
#include <cstdio>
#include <unordered_map>
#include <vector>

using namespace std;

/**
 * LeetCode 1507. Reformat Date
 * https://leetcode.com/problems/reformat-date/
 */
class ReformatDate {
public:
    string reformatDate(string date) {
        unordered_map<string, string> monthMap;
        string v;
        char str[32];
        for (int i = 0; i < 12; i++) {
            if (i + 1 < 10) {
                sprintf(str, "0%d", i + 1);
            } else {
                sprintf(str, "%d", i + 1);
            }
            v.append(str);
            monthMap[monthArr[i]] = v;
            v.clear();
        }
        string year;
        string month;
        string day;
        vector<string> splitedDate = split(date, ' ');
        year = splitedDate[2];
        month = monthMap[splitedDate[1]];
        day = parseDay(splitedDate[0]);
        sprintf(str, "%s-%s-%s", year.c_str(), month.c_str(), day.c_str());
        v.clear();
        v.append(str);
        return v;
    }
private:
    string monthArr[12] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec",
    };
    vector<string> split(string s, char c) {
        vector<string> vec;
        string v;
        int lastIdx = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                v.append(s, lastIdx, i - lastIdx);
                vec.push_back(v);
                v.clear();
                lastIdx = i + 1;
            }
        }
        v.clear();
        v.append(s, lastIdx, s.size() - lastIdx);
        vec.push_back(v);
        return vec;
    }
    string parseDay(string s) {
        string r;
        for (int i = 0; i < s.size(); i++) {
            if (!isdigit(s[i])) {
                if (i < 2) {
                    r.append("0");
                }
                r.append(s, 0, i);
                break;
            }
        }
        return r;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
