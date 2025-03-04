#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;

        int x = b/100;

        if(b %100 != 0){
            x++;
        }

        int ans = x - a;

        if(ans<0){
            cout<<"0"<<endl;
        }
        else cout<<ans<<endl;

	    


	}
}