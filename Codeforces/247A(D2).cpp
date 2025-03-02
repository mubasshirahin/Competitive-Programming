#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    string str;
    int ans=0;
    cin>>str;

    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            ans = ans + arr[0];            
        }
        if(str[i]=='2'){
            ans = ans + arr[1];            
        }
        if(str[i]=='3'){
            ans = ans + arr[2];            
        }
        if(str[i]=='4'){
            ans = ans + arr[3];            
        }
    }

    cout<<ans;    


    }