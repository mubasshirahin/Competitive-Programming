#include <bits/stdc++.h>
using namespace std;

/*-----------------------------------------------------------------------------------------------------------*/

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


const double pi = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;


int gcd(int a, int b) { if (a == 0) return b; else return gcd(b % a, a); }
int lcm(int a, int b) { return abs(a * b) / gcd(a, b); }
int maxThree(int a, int b, int c) { return (a >= b && a >= c) ? a : (b >= c) ? b : c; }
int countPrime(int n) { int count = 0; vector<bool> prime(n, true); prime[0] = prime[1] = false; for (int i = 2; i < n - 1; i++)
{ if (prime[i]) { count++; for (int j = 2 * i; j < n; j += i) { prime[j] = false; } } } return count; }
bool isPrime(int n) { if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i * i <= n; i += 6) { if (n % i == 0 || n % (i + 2) == 0) return false; } return true; }


void printArr(int arr[], int size) { fl(i, size) cout << arr[i] << " "; cout << endl; }
void printVec(vector<int> v) { int n = v.size(); fl(i, n) cout << v[i] << " "; cout << endl; }
void scanArr(int arr[], int size) { for (int i = 0; i < size; i++) { cin >> arr[i]; } }
void scanVec(vector<int>& v, int size) { for (int i = 0; i < size; i++) { int x; cin >> x; v.push_back(x); } }


/*-----------------------------------------------------------------------------------------------------------*/

int largestPowerExponent(long long n) {
    int x = 0;
    long long val = 1;
    while (val * 3 <= n) {
        val *= 3;
        x++;
    }
    return x;
}

long long power3(int x) {
    long long res = 1;
    for(int i = 0; i < x; i++) {
        res *= 3;
    }
    return res;
}

int main()
{
    grumpyonion();
    
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin >> n;

        ll ans = 0;

        ll x = largestPowerExponent(n);

        while(x>1){
            x = largestPowerExponent(n);
            ll cost = power3(x+1) + x*power3(x-1);
            ans += cost;
            n = n - power3(x);
            x = largestPowerExponent(n);
        }

        if(n==1)ans+=3;
        if(n==2)ans+=6;
        if(n==3)ans+=10;
        if(n==4)ans+=13;
        if(n==5)ans+=16;
        if(n==6)ans+=20;
        if(n==7)ans+=23;
        if(n==8)ans+=26;

        cout << ans << endl;



    }
return 0;
}

