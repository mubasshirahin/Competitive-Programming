#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("I love ");
        }
        else
        {
            printf("I hate ");
        }

        for (int j = 1; j <= n; j++)
        {

            if (i == n)
            {
                printf("it  ");
                break;
            }

                    else
        {
            printf("that ");
            break;
        }
        }

    }

return 0;
}