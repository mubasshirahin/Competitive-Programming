#include<bits/stdc++.h>

using namespace std;

int main() {

    string str1;
    string str2;

    cin>>str1>>str2;

    int size = str1.length();

    for(int i=0;i<size;i++){


        if(str1[i]>=97 && str1[i]<=122){
            str1[i]= str1[i]-32;
        }
        if(str2[i]>=97 && str2[i]<=122){
            str2[i]= str2[i]-32;
        }
    }

    int x = str1.compare(str2);

    cout<<x;

 


return 0 ;


 


}
