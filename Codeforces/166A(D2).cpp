#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    int temp = year + 1;

    while (true) {
        
        int d = temp % 10;
        int c = (temp / 10) % 10;
        int b = (temp / 100) % 10;
        int a = (temp / 1000) % 10;


        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            break;
        }

        temp++;
    }

    cout << temp << endl;

    return 0;
}
