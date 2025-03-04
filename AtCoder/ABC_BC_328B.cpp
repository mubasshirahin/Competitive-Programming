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

const ll lma = LONG_LONG_MAX;
const ll lmi = LONG_LONG_MIN;
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


int main() {
    int N;
    cin >> N;

    vector<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }

    vector<pair<int, int>> repdigitDates = {
        {1, 1}, {1, 11},
        {2, 2}, {2, 22},
        {3, 3}, {3, 33},
        {4, 4}, {4, 44},
        {5, 5}, {5, 55},
        {6, 6}, {6, 66},
        {7, 7}, {7, 77},
        {8, 8}, {8, 88},
        {9, 9}, {9, 99},
        {11, 1}, {11, 11},
        {22, 2}, {22, 22},
        {33, 3}, {33, 33},
        {44, 4}, {44, 44},
        {55, 5}, {55, 55},
        {66, 6}, {66, 66},
        {77, 7}, {77, 77},
        {88, 8}, {88, 88},
        {99, 9}, {99, 99}
    };

    int count = 0;

    for (int month = 1; month <= N; month++) {
        for (int day = 1; day <= D[month - 1]; day++) {
            if (find(repdigitDates.begin(), repdigitDates.end(), make_pair(month, day)) != repdigitDates.end()) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
