#include<stdio.h>

int main()
{
    int n,num;
    scanf("%d %d", &num,&n);

    for(int i=1;i<=n;i++){
            int ld = num%10;
          //  printf("%d \n", ld);
            if(ld != 0){
                num = num - 1;
            }
            else{
                num = num/10;
            }

               
    }

     printf("%d ", num);




return 0;
}