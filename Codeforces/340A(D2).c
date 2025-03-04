#include<stdio.h>
#include<math.h>

int main()
{
    float x;

    scanf("%f", &x);

    float ans = (x/5);

    float fAns = ceil(ans);

    int a = (int)fAns;

    printf("%d",a);


return 0;
}