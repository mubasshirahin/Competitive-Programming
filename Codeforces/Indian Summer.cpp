/*      _____
       /     \
      |  O  O |
      |   ^   |
      |  \_/  |
       \_____/ 
       A H I N
*/

#include <bits/stdc++.h>
using namespace std;

//****************************************************************************************************************************/
//                    *MACROS*
#define pi 3.1416
#define pb push_back
#define fl(i,n) for(int i=0;i<n;i++)
#define fla(a,n) for(int i=a;i<n;i++)
#define rfl(i,n,m) for(int i=n;i>=m;i--)
#define py cout << "YES" << endl;
#define pn cout << "NO" << endl;
#define grumpyonion() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

//****************************************************************************************************************************/
//                   *ALIASES*
using ll = long long;

//****************************************************************************************************************************/
//                   *CONSTANTS*
const ll ima = LONG_LONG_MAX;
const ll imi = LONG_LONG_MIN;

//****************************************************************************************************************************/
//                   *TYPEDEF
typedef vector<int> vint;

//****************************************************************************************************************************/
//                   *IMPORTANT FUNCTIONS
void printArr(int arr[], int size) { fl(i, size) cout << arr[i] << " "; cout << endl; }
void printVec(vector<int> v) { int n = v.size(); fl(i, n) cout << v[i] << " "; cout << endl; }
void scanArr(int arr[], int size) { for (int i = 0; i < size; i++) { cin >> arr[i]; } }
void scanVec(vector<int>& v, int size) { for (int i = 0; i < size; i++) { int x; cin >> x; v.push_back(x); } }

//                   *MATHEMATICAL FUNCTIONS
int gcd(int a, int b) { if (a == 0) return b; else return gcd(b % a, a); }
int lcm(int a, int b) { return std::abs(a * b) / gcd(a, b); }
int maxThree(int a, int b, int c) { return (a >= b && a >= c) ? a : (b >= c) ? b : c; }
int maxInArray(int arr[], int size) { int max = INT_MIN; for (int i = 0; i < size; i++) { max = (arr[i] > max) ? arr[i] : max; } return max; }
int minInArray(int arr[], int size) { int min = INT_MAX; for (int i = 0; i < size; i++) { min = (arr[i] < min) ? arr[i] : min; } return min; }
int countPrime(int n) { int count = 0; vector<bool> prime(n, true); prime[0] = prime[1] = false; for (int i = 2; i < n - 1; i++) { if (prime[i]) { count++; for (int j = 2 * i; j < n; j += i) { prime[j] = false; } } } return count; }
int sameFlow(int arr[], int size) { int ans = 0; fl(i, size) { ans = (ans * 10) + arr[i]; } return ans; }
int reverseFlow(int arr[], int size) { int ans1 = 0; fl(i, size) { ans1 = (arr[i] * pow(10, i)) + ans1; } return ans1; }
int findUnique(int arr[], int size) { int unique = 0; fl(i, size) { unique ^= arr[i]; } return unique; }
int findDuplicate(int arr[], int size) { sort(arr, arr + size); for (int i = 1; i < size; ++i) { if (arr[i] == arr[i - 1]) { return arr[i]; } } return -1; }
void rightRotate(int arr[], int size, int k) { int temp[size]; fl(i, size) { temp[(i + k) % size] = arr[i]; } fl(i, size) { arr[i] = temp[i]; } }
void leftRotate(int arr[], int size, int k) { int temp[size]; fl(i, size) { temp[(i - k + size) % size] = arr[i]; } fl(i, size) { arr[i] = temp[i]; } }
void countOccurrences(int arr[], int size) {int count[size] = {0};for (int i = 0; i < size; ++i) {bool alreadyCounted = false;for (int j = 0; j < i; ++j) {if (arr[i] == arr[j]) {alreadyCounted = true;break;}}if (!alreadyCounted) {int occurrences = 0;for (int k = 0; k < size; ++k) {if (arr[k] == arr[i]) {++occurrences;}}count[i] = occurrences;}}printArr(count,size);}

//****************************************************************************************************************************/
//                   *BOOLEAN FUNCTIONS
bool isPrime(int n) {if (n <= 1) return false;if (n <= 3) return true;if (n % 2 == 0 || n % 3 == 0) return false;for (int i = 5; i * i <= n; i += 6) {if (n % i == 0 || n % (i + 2) == 0) return false;}return true;}

//****************************************************************************************************************************/
//                    *START

int main()
{
       grumpyonion();
    
       int n;
       cin>>n;
       vector<pair<string,string>> v(n);
       for(int i=0;i<n;i++){
              cin>>v[i].first>>v[i].second;
       }

       sort (all(v));
       int new_size = unique(all(v))-v.begin();
       cout<<new_size<<endl;

return 0;
}