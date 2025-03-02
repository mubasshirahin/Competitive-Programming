#include<stdio.h>
int main()
{
    int a[]= {4,7,44,47,74,77,447,774,474,747,744,477,444,777};
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0; i<=13; i++)
    {
        if(n%a[i]==0)
            sum++;
    }
    if(sum>0)
        printf("YES");
    else
        printf("NO");
        return 0;
}
