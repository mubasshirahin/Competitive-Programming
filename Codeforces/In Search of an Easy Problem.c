#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    int temp = 0;

    for (int j = 0; j < n; j++) {
        if (arr[j] == 1) {
            temp = 1;
            break;
        }
    }

    if (temp == 1) {
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }

    return 0;
}
