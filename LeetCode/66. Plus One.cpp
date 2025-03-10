#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        for (int i = v.size() - 1; i >= 0; i--) {
            if (v[i] < 9) {
                v[i] += 1;
                return v;
            }
            v[i] = 0;
        }

        v.insert(v.begin(), 1);
        return v;
    }
};

int main() {
    Solution solution;
    vector<int> v = {9, 9, 9};

    vector<int> result = solution.plusOne(v);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
