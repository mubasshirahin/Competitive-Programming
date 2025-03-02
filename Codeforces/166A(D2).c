#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int current = 0; 
    int max = 0; 

    for (int i = 0; i < n; i++) {
        int exit, in;
        scanf("%d %d", &exit, &in);

        
        current = current - exit + in;

        if (current > max) {
            max = current;
        }
    }

    printf("%d\n", max);

    return 0;
}
