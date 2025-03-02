#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    int count=0;


    for(int i=0;i<n;i++){

        arr[i]=arr[i]+k;

        if(arr[i]<=5){
            count++;
        }

    }

    int ans = count/3;

    cout<<ans;


    




    }