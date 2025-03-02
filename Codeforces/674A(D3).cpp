#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    int floor;
    for(int i=1;i<=t;i++){
        int n,x;                 //n=7,x = 3
        cin>>n>>x;

        int temp = 2;
        floor = 1;
        
    while(temp<n){
            temp += x;    //temp = 5,8,11
            floor++;
        }
        cout<<floor<<endl;
        }
        
    return 0;
}