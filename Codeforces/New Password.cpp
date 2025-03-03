#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abcdefghijklmnopqrstuvwxyz";
    int n,k;
    cin>>n>>k;

    string ans;

    for(int i=0;i<n;i++){
        ans+=s[i%k];
    }

    cout<<ans<<endl;
}