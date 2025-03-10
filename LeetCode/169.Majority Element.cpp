#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;

        for (auto u : nums) {
            mp[u]++;
            if (mp[u] > nums.size() / 2) {
                return u;
            }
        }    
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 3, 4, 2, 3, 3, 3};

    int result = solution.majorityElement(nums);
    cout << "Majority Element: " << result << endl;

    return 0;
}
