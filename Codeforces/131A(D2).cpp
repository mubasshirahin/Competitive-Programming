#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int size = s.size();
    bool is_true = true;

    for (int i = 1; i < size; i++) {
        if (islower(s[i])) {
            is_true = false;
            break;
        }
    }


    if (is_true) {
        for (int i = 0; i < size; i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    
    cout << s << endl;
    return 0;
}
