#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (!s.empty()) {
            string result = s.back() + s.substr(1);
            cout << result << "\n";
        } else {
            cout << "\n";
        }
    }
    return 0;
}
