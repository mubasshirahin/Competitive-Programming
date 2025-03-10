#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int minPrice = v[0];
        int maxProfit = 0;

        for (int i = 1; i < v.size(); i++) {
            int Profit = v[i] - minPrice;
            maxProfit = max(maxProfit, Profit);
            minPrice = min(v[i], minPrice);
        }
        return maxProfit;
    }
};

int main() {
    Solution solution;
    vector<int> v = {7, 1, 5, 3, 6, 4};

    int result = solution.maxProfit(v);

    cout << "Max profit: " << result << endl;

    return 0;
}
