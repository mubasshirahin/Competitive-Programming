#include<stdio.h>

int main()
{
    int w;

    scanf("%d", &w);

    if(w>0 && w<=100){
        if(w==2){
            printf("NO");
        }
        else if(w%2==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }


return 0;
}