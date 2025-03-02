#include<stdio.h>

int main()
{
    int n;
    int a,b,c;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);

        if(a + b == c ){
            printf("+\n");
        }
        else{
            printf("-\n");
        }


    }

return 0;
}