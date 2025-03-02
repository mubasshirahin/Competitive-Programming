#include<stdio.h>
int main()
{
    int t,sum=0;
    scanf("%d",&t);
    int arr[t];

    for(int i=1;i<=t;i++)
    {
        
        scanf("%d",&arr[i]);
        sum= sum+ arr[i];
    }

    float w=(float)sum/t;
    printf("%f",w);
 
    return 0;
}