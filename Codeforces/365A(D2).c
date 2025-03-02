#include<stdio.h>

int main()
{
    int n;
    int a,b;    
    int mishka = 0;
    int chris = 0;                //a=mishka    b=chris
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d %d", &a,&b);
        if(a>b){
            mishka++;
        }
        else if (b>a){
            chris++;
        }
    }

    if(mishka>chris){
        printf("Mishka");
    }
    else if(mishka<chris){
        printf("Chris");
    }
    else{
        printf("Friendship is magic!^^");
    }

return 0;
}