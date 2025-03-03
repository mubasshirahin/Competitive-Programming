#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int tot = 0, sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        tot += x;
    }
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        swap(x, y);
    }

    for (int i = x - 1; i < y - 1; i++)
    {
        sum1 += v[i];
    }
    sum2 = tot - sum1;
    cout << min(sum1, sum2);

    return 0;
}