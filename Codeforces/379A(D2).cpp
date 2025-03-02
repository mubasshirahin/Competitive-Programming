#include<bits/stdc++.h>

using namespace std;

int main() {

    string str;
    
    int _anton = 0;
    int _danik = 0;

    int n;
    cin>>n;

    cin>>str;

    for(int i=0;i<n;i++){
        if(str[i]== 'A'){
            _anton ++;
        }
        else{
            _danik ++;
        }
    }

    //cout<<_anton<<" "<<_danik;

    if(_anton>_danik){
        cout<<"Anton"<<endl;
    }
    else if(_anton<_danik){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }



}
