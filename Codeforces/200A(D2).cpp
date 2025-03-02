#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int _group=0;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            _group++;
        }
    }

    cout<<_group<<endl;

    return 0;
}
