#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(auto& u : arr){
        for(auto& elem : u){
            cin>>elem;
        }
    }

    int row= 0;

    while(row<n){
        int i=0;
        int j=m-1;
        while(i<j){
            swap(arr[row][i],arr[row][j]);
            i++;
            j--;
        }
        row++;
    }

    for(auto &u : arr){
        for(auto& elem : u){
            cout<<elem<<" ";
        }cout<<endl;
    }


}

//1 2 
//3 4

//2 1
//4 3