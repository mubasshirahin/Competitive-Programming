#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;cin>>size;

    int a;
    cin>>a;

    int arr[size];

    for(auto &u : arr){
        cin>>u;
    }

    int sum = 0;

    while(a--){
        int x;cin>>x;
        sum += arr[x-1];
    }

    cout<<sum<<endl;

}