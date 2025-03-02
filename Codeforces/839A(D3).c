#include<stdio.h>

int main()
{
    int n;
    int a,b;
    char ch;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d%c%d", &a,&ch,&b);
        printf("%d\n", a+b);
    }



return 0;
}