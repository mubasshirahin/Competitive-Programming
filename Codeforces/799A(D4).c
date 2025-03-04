#include<stdio.h>

int main()
{
    long long int n;
    long long int a,b,c,d;
    
    scanf("%lld", &n);

    for(int i=1;i<=n;i++){
        long long int count=0;
        scanf("%lld%lld%lld%lld", &a,&b,&c,&d);
       // printf("\n");

        if(a<b){
            count++;
        }
        if(a<c)
        {
            count++;
        }
        if(a<d){
            count++;
        }
         printf("%lld\n", count);
    }

   

return 0;
}