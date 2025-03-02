#include<bits/stdc++.h>

using namespace std;

int main() {

    string str;
    cin>>str;
    string strdemo = "hello";

    int size = str.length();
    int count=0;

    for(int i=0,j=0;i<size;i++){
        if(str[i]==strdemo[j]){
            count++;
            j++;
        }
    }

    if(count>=5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }


 


}
