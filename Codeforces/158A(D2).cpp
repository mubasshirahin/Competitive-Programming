#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a[10000],count=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1]&&a[i]>0)
        {
            count++;
            
        }
    }
    cout<<count<<endl;


}
