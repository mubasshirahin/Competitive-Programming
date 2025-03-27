#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;

#define fl(i,n) for(int i=0;i<n;i++)
#define fla(a,n) for(int i=a;i<n;i++)
#define rfl(i,n,m) for(int i=n;i>=m;i--)
#define grumpyonion() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

using ll = long long;
using dl = double;

typedef vector<int> vi;

void scanVec(vector<int>& v, int size) { 
    v.resize(size); 
    for (int i = 0; i < size; i++) { 
        cin >> v[i]; 
    } 
}

int main() {
    grumpyonion();
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vi v;
        scanVec(v, n);

        // Reverse the vector
        reverse(all(v));

        // The height of the last person in the reversed list
        int myHeight = v[n - 1];
        int maxIdx = -1;

        // Find the first person whose height is >= myHeight
        for (int i = 0; i < n; i++) {
            if (v[i] >= myHeight) {
                maxIdx = i;
                break;
            }
        }

        cout << maxIdx << endl;
    }

    return 0;
}
