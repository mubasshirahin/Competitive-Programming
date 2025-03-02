#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

        for(int i=1;i<=t;i++){
        char str[4];
        cin>>str;

        int a = (int)str[0];
        int b = (int)str[1];
        int c = (int)str[2];

        //cout<<a<<" "<<b<<" "<<c<<endl;

        if (( a == 121 || a == 89) && ( b == 69 || b == 101) && ( c == 115 || c == 83)) {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }      


    }

    return 0;

}