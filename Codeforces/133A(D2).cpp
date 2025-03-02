#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[100];
    cin>>str;

    int x = strlen(str);

    bool flag = false;

    for(int i=0;i<x;i++){
        if((str[i] == 'H')||(str[i] == 'Q')||(str[i] == '9')){
            flag = true;
        }
    }

    if(flag == true){
        cout<<"YES";
    }
    else cout<<"NO";

    return 0;

}