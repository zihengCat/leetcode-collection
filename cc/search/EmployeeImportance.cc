#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

/**
 * Definition for Employee.
 */
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};

/**
 * LeetCode 690. Employee Importance
 * https://leetcode.com/problems/employee-importance/
 */
class EmployeeImportance {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> hmap = buildMap(employees);
        // return dfs(hmap, id);
        return bfs(hmap, id);
    }
private:
    int bfs(unordered_map<int, Employee*>& hmap, int id) {
        if (hmap.find(id) == hmap.end()) {
            return 0;
        }
        int sum = 0;
        Employee* e = hmap.find(id) -> second;
        queue<Employee*> q;
        Employee* c = nullptr;
        q.push(e);
        while (!q.empty()) {
            c = q.front();
            q.pop();
            sum += c -> importance;
            int n = c -> subordinates.size();
            for (int i = 0; i < n; i++) {
                q.push(hmap[c -> subordinates[i]]);
            }
        }
        return sum;
    }
    int dfs(unordered_map<int, Employee*>& hmap, int id) {
        if (hmap.find(id) == hmap.end()) {
            return 0;
        }
        Employee* e = hmap.find(id) -> second;
        int sum = 0;
        int n = e -> subordinates.size();
        for (int i = 0; i < n; i++) {
            sum += dfs(hmap, e -> subordinates[i]);
        }
        sum += e -> importance;
        return sum;
    }
    unordered_map<int, Employee*> buildMap(vector<Employee*> arr) {
        unordered_map<int, Employee*> hmap;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            hmap[arr[i] -> id] = arr[i];
        }
        return hmap;
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
