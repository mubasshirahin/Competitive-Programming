#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int n;
        cin>>n;

        int ans = (n%10)+(n/10);
        cout<<ans<<endl;

    }

    return 0;
}