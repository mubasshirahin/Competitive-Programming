#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N <= 999)
    {
        cout << N << endl;
    }
    else if (N >= 1000 && N <= 9999)
    {
        int r = N / 10;
        cout << r << "0" << endl;
    }
    else if (N >= 10000 && N <= 99999)
    {
        int r = N / 100;
        cout << r << "00" << endl;
    }
    else if (N >= 100000 && N <= 999999)
    {
        int r = N / 1000;
        cout << r << "000" << endl;
    }
    else if (N >= 1000000 && N <= 9999999)
    {
        int r = N / 10000;
        cout << r << "0000" << endl;
    }
    else if (N >= 10000000 && N <= 99999999)
    {
        int r = N / 100000;
        cout << r << "00000" << endl;
    }
    else if (N >= 100000000 && N <= 999999999)
    {
        int r = N / 1000000;
        cout << r << "000000" << endl;
    }

    return 0;
}
