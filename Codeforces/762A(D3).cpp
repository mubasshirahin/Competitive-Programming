#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        string str;
        cin>>str;

        int size = str.length();
        bool flag = false;

        if(size%2==1){
            cout<<"NO"<<endl;
            continue;
        }

        else{

            int mid = size/2;

            for(int i=0;mid<size;i++){
                if(str[i]==str[mid]){
                flag = true;
                mid++;
                }
                else{
                    flag = false;
                    break;
                }
            }

        }
        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }

}