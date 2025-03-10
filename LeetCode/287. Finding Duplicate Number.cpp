#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& v) {
        map<int, int> mp;

        for (auto u : v) {
            mp[u]++;
        }

        for (auto u : mp) {
            if (u.second >= 2) {
                return u.first;
            }
        }
        return 0;
    }
};

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};  // Example input
    Solution sol;
    int duplicate = sol.findDuplicate(nums);

    cout << "Duplicate number: " << duplicate << endl;
    return 0;
}