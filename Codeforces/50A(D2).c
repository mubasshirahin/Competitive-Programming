
#include<stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d%d", &a,&b);

    int area = a*b;
    int temp = 2;

    int count = area/temp;

    printf("%d", count);




return 0;
}