int main()
{
    grumpyonion();
 
    int t;cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool check = false;

        vi v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];

            if(v[i]<=i+1){
                check = true;
                cout<<v[i]<<endl;
                break;
            }
        }

        if(check)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
 return 0;
}