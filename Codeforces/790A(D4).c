#include<stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        int n;
        scanf("%d", &n);
        
        int f = n % 10;
        int e = (n / 10) % 10;
        int d = (n / 100) % 10;
        int c = (n / 1000) % 10;
        int b = (n / 10000) % 10;
        int a = (n / 100000) % 10;

        int l = a+b+c;
        int m = d+e+f;

        if(l==m){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}
