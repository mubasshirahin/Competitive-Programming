#include<iostream>
using namespace std;

int main(){

    int t;
    cin>> t;

    while(t--){
    string str;
    cin>> str;

    if(str == "abc"){
            cout<<"YES"<<endl;
    }
    else if(str == "acb"){
            cout<<"YES"<<endl;
    }
    else if(str == "bac"){
            cout<<"YES"<<endl;
    }
    else if(str == "cba"){
            cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    


    }
}