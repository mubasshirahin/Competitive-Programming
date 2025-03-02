#include<iostream>
using namespace std;

int medium(int a,int b,int c){
    if((a>b && a<c) || (a>c && a<b)){
        return a;
    }
    else if((b>a && b<c) || (b>c && b<a)){
        return b;
    }
    else{
        return c;
    }
    
}

int main(){
    int t;
    cin>>t;

    for(int i=1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;

        cout<<medium(a,b,c)<<endl;

        
    }

    return 0;
}