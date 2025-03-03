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

int main()
{
    grumpyonion();
 
    char arr[30]={
        'q','w','e','r','t','y','u','i','o','p',
        'a','s','d','f','g','h','j','k','l',';',
        'z','x','c','v','b','n','m',',','.','/',
    };

    char ch;
    cin>>ch;

    string str;
    cin>>str;

    string ans;

    if(ch=='L'){

    for(int i=0;i<str.size();i++){

    if(str[i]=='q')ans+='w';
    else if(str[i]=='w')ans+='e';
    else if(str[i]=='e')ans+='r';
    else if(str[i]=='r')ans+='t';
    else if(str[i]=='t')ans+='y';
    else if(str[i]=='y')ans+='u';
    else if(str[i]=='u')ans+='i';
    else if(str[i]=='i')ans+='o';
    else if(str[i]=='o')ans+='p';
    else if(str[i]=='p')ans+='a';
    else if(str[i]=='a')ans+='s';
    else if(str[i]=='s')ans+='d';
    else if(str[i]=='d')ans+='f';
    else if(str[i]=='f')ans+='g';
    else if(str[i]=='g')ans+='h';
    else if(str[i]=='h')ans+='j';
    else if(str[i]=='j')ans+='k';
    else if(str[i]=='k')ans+='l';
    else if(str[i]=='l')ans+=';';
    else if(str[i]==';')ans+='z';
    else if(str[i]=='z')ans+='x';
    else if(str[i]=='x')ans+='c';
    else if(str[i]=='c')ans+='v';
    else if(str[i]=='v')ans+='b';
    else if(str[i]=='b')ans+='n';
    else if(str[i]=='n')ans+='m';
    else if(str[i]=='m')ans+=',';
    else if(str[i]==',')ans+='.';
    else if(str[i]=='.')ans+='/';
    else if(str[i]=='/')ans+='/';
    }
    }

    else{

    for(int i=0;i<str.size();i++){

    if(str[i]=='q')ans+='q';
    else if(str[i]=='w')ans+='q';
    else if(str[i]=='e')ans+='w';
    else if(str[i]=='r')ans+='e';
    else if(str[i]=='t')ans+='r';
    else if(str[i]=='y')ans+='t';
    else if(str[i]=='u')ans+='y';
    else if(str[i]=='i')ans+='u';
    else if(str[i]=='o')ans+='i';
    else if(str[i]=='p')ans+='o';
    else if(str[i]=='a')ans+='p';
    else if(str[i]=='s')ans+='a';
    else if(str[i]=='d')ans+='s';
    else if(str[i]=='f')ans+='d';
    else if(str[i]=='g')ans+='f';
    else if(str[i]=='h')ans+='g';
    else if(str[i]=='j')ans+='h';
    else if(str[i]=='k')ans+='j';
    else if(str[i]=='l')ans+='k';
    else if(str[i]==';')ans+='l';
    else if(str[i]=='z')ans+=';';
    else if(str[i]=='x')ans+='z';
    else if(str[i]=='c')ans+='x';
    else if(str[i]=='v')ans+='c';
    else if(str[i]=='b')ans+='v';
    else if(str[i]=='n')ans+='b';
    else if(str[i]=='m')ans+='n';
    else if(str[i]==',')ans+='m';
    else if(str[i]=='.')ans+=',';
    else if(str[i]=='/')ans+='.';
    }
    }

    cout<<ans<<endl;



 
 return 0;
}