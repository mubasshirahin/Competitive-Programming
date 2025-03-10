#include <iostream>
#include <vector>

using namespace std;

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& v) {
//         vector<int> vv;
//         int sum = 0;
//         for(int i = 0; i < v.size(); i++) {
//             sum += v[i];
//             vv.push_back(sum);
//         }
//         return vv;
//     }
// };

class Solution {
    public:
        vector<int> runningSum(vector<int>& v) {
            for(int i=1;i<v.size();i++){
                v[i] += v[i-1];
            }  
            return v;      
        }
    };

int main() {
    Solution solution;
    vector<int> v = {1, 2, 3, 4};

    vector<int> result = solution.runningSum(v);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
