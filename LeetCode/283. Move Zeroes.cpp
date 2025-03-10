#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& v) {
        map<int, int> mp;

        for (auto u : v) {
            mp[u]++;
        }   
        v.erase(remove(v.begin(), v.end(), 0), v.end());  
        while (mp[0]--) {
            v.push_back(0);
        }
    }
};

// class Solution {
//     public:
//         void moveZeroes(vector<int>& v) {
    
//             int size = v.size();
    
//             for(int i=0;i<size; ){
//                 if(v[i]==0){
//                     v.erase(v.begin()+i);
//                     v.push_back(0);
//                     size--;
//                 }
//                 else{
//                     i++;
//                 }
//             }      
//         }
//     };

int main() {
    Solution solution;
    vector<int> v = {0, 1, 0, 3, 12};

    solution.moveZeroes(v);

    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
