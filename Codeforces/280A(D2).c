#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
    int sum2 = 0;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        sum = sum+i;
        sum2 = sum2+sum;

        if(n==1){
            printf("1");
            break;
        }

        else if(sum2>n){
           printf("%d", i-1);
            break;
        }

    }

    
return 0;
}