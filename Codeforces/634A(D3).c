#include<stdio.h>
int main()
{
    long long int n,num;
    scanf("%lld ",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%lld",&num);
        if(num<=2)
            printf("0\n");
        else
        {
            if(num%2==0)
                printf("%lld\n",(num/2)-1);
            else
                printf("%lld\n",num/2);

        }
    }

    return 0;
}
