#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2512. Reward Top K Students
 * https://leetcode.com/problems/reward-top-k-students/
 */
class RewardTopKStudents {
public:
    vector<int> topStudents(
        vector<string>& positive_feedback,
        vector<string>& negative_feedback,
        vector<string>& report,
        vector<int>& student_id,
        int k
    ) {
        unordered_set<string> sp;
        unordered_set<string> sn;
        for (int i = 0; i < positive_feedback.size(); i++) {
            sp.insert(positive_feedback[i]);
        }
        for (int i = 0; i < negative_feedback.size(); i++) {
            sn.insert(negative_feedback[i]);
        }
        unordered_map<int, int> m;
        for (int i = 0; i < report.size(); i++) {
            vector<string> v = split(report[i], " ");
            for (int j = 0; j < v.size(); j++) {
                if (sp.find(v[j]) != sp.end()) {
                    m[i + 1] += 3;
                }
                if (sn.find(v[j]) != sp.end()) {
                    m[i + 1] -= 1;
                }
            }
        }
        return findTopK(m, k);
    }
private:
    vector<int> findTopK(unordered_map<int, int> m, int k) {
        unordered_map<int, vector<int> > mm;
        for (unordered_map<int, int>::iterator iter = m.begin();
            iter != m.end();
            iter++
        ) {
            mm[iter -> second].push_back(iter -> first);
        }
        return vector<int>();
    }
    // for string delimiter
    vector<string> split(string s, string delimiter) {
        size_t pos_start = 0;
        size_t pos_end = 0;
        size_t delim_len = delimiter.length();
        string token;
        vector<string> res;
        while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
            token = s.substr(pos_start, pos_end - pos_start);
            pos_start = pos_end + delim_len;
            res.push_back(token);
        }
        res.push_back(s.substr (pos_start));
        return res;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
