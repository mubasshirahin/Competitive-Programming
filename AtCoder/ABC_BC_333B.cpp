#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x, y, a, b;
    cin >> x >> y >> a >> b;
    
    if (abs(y - x) == abs(b - a)) 
        cout << "Yes" << endl;
    else
    {
        if (abs(y - x) == 4 && abs(b - a) == 1) 
            cout << "Yes" << endl;
        else if (abs(y - x) == 1 && abs(b - a) == 4) 
            cout << "Yes" << endl;
        else if (abs(y - x) == 2 && abs(b - a) == 3) 
            cout << "Yes" << endl;
        else if (abs(y - x) == 3 && abs(b - a) == 2) 
            cout << "Yes" << endl;
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
