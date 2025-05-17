#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];

    vector<int> border;

    for (int j = 0; j < n; j++) border.push_back(arr[0][j]);
    for (int i = 1; i < n - 1; i++) border.push_back(arr[i][n - 1]);
    for (int j = n - 1; j >= 0; j--) border.push_back(arr[n - 1][j]);
    for (int i = n - 2; i >= 1; i--) border.push_back(arr[i][0]);


    rotate(border.rbegin(), border.rbegin() + 1, border.rend());

    int idx = 0;
    for (int j = 0; j < n; j++) arr[0][j] = border[idx++];
    for (int i = 1; i < n - 1; i++) arr[i][n - 1] = border[idx++];
    for (int j = n - 1; j >= 0; j--) arr[n - 1][j] = border[idx++];
    for (int i = n - 2; i >= 1; i--) arr[i][0] = border[idx++];

    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
