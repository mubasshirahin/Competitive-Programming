#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (auto &u : arr)
        {
            cin >> u;
        }

        int cnt = 0;

        for (auto u : arr)
        {
            if (u % 2 == 1)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}