#include<stdio.h>

int main()
{
    int n;
    int a;
    int man= 0;
    int un=0;
    int done=0;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d", &a);

        if(a>=1){
            man=man+a;
        }
        else if(a==-1){
            if(man>=1){
                done++;
                man--;
            }
            else{
                un++;
            }
        }


    }

    printf("%d",un);

return 0;
}