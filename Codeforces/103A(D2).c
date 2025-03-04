#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n + 10];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[1], max = 0;

    int imax = 0, imin = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            imax = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            imin = i;
        }
    }
    int sum = 0;
    sum = (imax - 1) + (n - imin);
    if (imax > imin)
    {
        sum = sum - 1;
    }

    // printf("%d ", imax);
    // printf("%d ", imin);

    printf("%d\n", sum);

    return 0;
}