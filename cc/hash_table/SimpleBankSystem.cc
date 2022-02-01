#include <vector>
#include <unordered_map>

using namespace std;

/**
 * LeetCode 2043. Simple Bank System
 * https://leetcode.com/problems/simple-bank-system/
 */
class Bank {
public:
    Bank(vector<long long>& balance) {
        for (int i = 0; i < balance.size(); i++) {
            this -> hmap[i + 1] = balance[i];
        }
    }

    bool transfer(int account1, int account2, long long money) {
        if (!exists(account1) || !exists(account2)) {
            return false;
        }
        if (this -> hmap[account1] < money) {
            return false;
        }
        this -> hmap[account1] -= money;
        this -> hmap[account2] += money;
        return true;
    }

    bool deposit(int account, long long money) {
        if (!exists(account)) {
            return false;
        }
        this -> hmap[account] += money;
        return true;
    }

    bool withdraw(int account, long long money) {
        if (!exists(account)) {
            return false;
        }
        if (this -> hmap[account] < money) {
            return false;
        }
        this -> hmap[account] -= money;
        return true;
    }
private:
    bool exists(int account) {
        return this -> hmap.find(account) != this -> hmap.end();
    }
    unordered_map<int, long long> hmap;
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
