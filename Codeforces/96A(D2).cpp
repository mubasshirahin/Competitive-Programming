#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;    
    cin >> str;

    int count0 = 0;
    int count1 = 0;

    int size = str.length();

    for (int i = 0; i < size; ++i) {
        if (i > 0 && str[i] == str[i - 1]) {
            if (str[i] == '0') {
                ++count0;
            } else if (str[i] == '1') {
                ++count1;
            }
        } else {
            if (str[i] == '0') {
                count0 = 1;
            } else if (str[i] == '1') {
                count1 = 1;
            }
        }

        if (count0 >= 7 || count1 >= 7) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
