#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for(int i=0; i<str1.size(); i++)
    {
        if(str1[i]==str2[i])
            cout<<"0";

        else{
            cout<<"1";
        }
    }
    cout<<endl;
}
