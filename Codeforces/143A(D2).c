#include<stdio.h>

int main()
{
    int n;
    int a,b,c;
    int count =0;


    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d%d%d", &a, &b, &c);

        if((a==1 && b==1 && c==1) || (a==1 && b==1 && c==0) || (a==1 && b==0 & c==1) || (a==0 && b==1 && c==1)){
            count = count+1;
        }
}

printf("%d", count);

return 0;
}