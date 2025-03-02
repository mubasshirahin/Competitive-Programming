#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int _cow;
    int _chicken;
 
    for(int i=1;i<=t;i++){
        int legs;
        cin>>legs;

        _cow = 0;
        _chicken = 0;

        while(legs>=2){
            if(legs>=4){
                _cow++;
                legs -= 4;
            }
            else{
                _chicken++;
                legs -= 2;
            }


        }
        cout<<(_cow + _chicken)<<endl;
}
        
    return 0;
}