#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);

        int remainder = (c - b) % a;

        if (remainder == 0) {
            printf("%d\n", c);
        } else {
            printf("%d\n", c - remainder);
        }
    }

    return 0;
}
