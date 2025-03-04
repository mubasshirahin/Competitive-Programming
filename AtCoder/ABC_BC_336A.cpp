#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;
string s="L";
while(n--){
    s.push_back('o');
}
s += "ng";

cout<<s<<endl;
}