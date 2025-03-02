#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    int max;
    if (x >  y)
    {
        max = x;
    }
    else
    {
        max = y;
    }

    switch (max)
    {
    case 1:
        printf("1/1");
        break;
    case 2:
        printf("5/6");
        break;
    case 3:
        printf("2/3");
        break;
    case 4:
        printf("1/2");
        break;
    case 5:
        printf("1/3");
        break;
    case 6:
        printf("1/6");
        break;
    }
    return 0;
}
