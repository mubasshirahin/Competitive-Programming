#include<bits/stdc++.h>
using namespace std;

void reverse(string& str,int start,int end){
    int i,j;
    for(i=start,j=end;i<=j;i++,j--){
        swap(str[i],str[j]);
    }
    
}

int main(){
    string str1,str2;
    cin>>str1>>str2;

    reverse(str1,0,str1.length()-1);

    // cout<<str1;

    if(str1 == str2) cout<<"YES"<<endl;
    else cout<<"NO";




}