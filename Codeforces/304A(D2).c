#include<stdio.h>

int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);

    int price=0;

    for(int i=1;i<=w;i++){
            price = price + k*i;
    }

    //printf("%d ", price);

    int loan = price - n;

    if(loan>0){

    printf("%d ", loan);
    }

    else{
        printf("0");

    }



return 0;
}