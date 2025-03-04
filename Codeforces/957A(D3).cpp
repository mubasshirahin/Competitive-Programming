#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int _min=0;


        for(int i=1;i<=5;i++){
            _min = min({a,b,c});
            
            if(_min == a){
                a++;
            }
            else if(_min == b){
                b++;
            }
            else{
                c++;
            }

        }

        cout<<(a*b*c)<<endl;

    }


}
