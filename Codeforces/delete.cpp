#include <bits/stdc++.h>
using namespace std;

struct Books
{
    int id;
    char tittle[100];
    double price;
};

void deleteBooks(Books *&book, int &n, int id)
{
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (book[i].id == id)
        {
            idx = i;
            break;
        }        
    }
    if(idx == -1)cout<<"Not Found"<<endl;
    else{
        for(int i=idx;i<n;i++){
            book[i]=book[i+1];
        }
        n--;
    }
}

void displayBooks(Books* &book,int &n){
    for(int i=0;i<n;i++){
        if(1){
            cout<<book[i].id<<" "<<book[i].tittle<<" "<<book[i].price<<endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Books *bk = new Books[n];

    for (int i = 0; i < n; i++)
    {
        cin >> bk[i].id;
        cin >> bk[i].tittle;
        cin >> bk[i].price;
    }

    cout << "Want to remove Book:" << endl
         << "1.Yes" << endl
         << "2.No" << endl;
    bool check;
    cin >> check;

    if (check)
    {
        int id;cin>>id;
        deleteBooks(bk,n,id);
        displayBooks(bk,n);
    }
    else
    {
        displayBooks(bk,n);
    }

    delete[] bk;

    return 0;
}