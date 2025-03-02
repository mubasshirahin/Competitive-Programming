#include<stdio.h>

int main()
{
    int nF,fence;
    int h;
    int count=0;
    scanf("%d %d", &nF,&fence);

    for(int i=1;i<=nF;i++){
        scanf("%d", &h);
        if(h>fence){
            count= count+2;
        }
        else{
            count++;
        }


        }

        printf("%d", count);




return 0;
}