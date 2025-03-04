#include<bits/stdc++.h>

using namespace std;

int main() {

    string str;
    cin>>str;

    int size = str.length();

    int arrsize = size/2 + 1;

    int arr[arrsize]={0};

    int j=0;
    for(int i=0;i<size;i+=2,j++){
        arr[j]=str[i];
        arr[j] -= 48;
    }

    sort(arr,arr+arrsize);

    for(int i=0;i<arrsize;i++){
        cout<<arr[i];
        if (i < arrsize - 1) {
            cout << "+";
        }
    }







}
