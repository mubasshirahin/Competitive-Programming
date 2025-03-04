#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    

    while(t--){   
        
        int sum1=0;           //n=moves;
        int n,m;

        cin>>n>>m;

        for(int i=0;i<n;i++){
            if(m>sum1){
                sum1++;
            }
            else if(m<sum1){
                sum1--;
            }
            else{
                sum1++;
            }
        }

        if(sum1==m){
            cout<<"Yes"<<endl;;
        }
        else cout<<"No"<<endl;

    }
}