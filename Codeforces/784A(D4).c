#include<stdio.h>

int main()
{
    int n;
    int rating;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d", &rating);
        switch(rating){
            case 1900 ... 5000:
            printf("Division 1\n");
            break;
                        case 1600 ... 1899:
            printf("Division 2\n");
            break;
                        case 1400 ... 1599:
            printf("Division 3\n");
            break;
                        case -5000 ... 1399:
            printf("Division 4\n");
            break;
        }
    }

return 0;
}