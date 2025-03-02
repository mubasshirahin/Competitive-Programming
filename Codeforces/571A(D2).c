#include<stdio.h>

int main()
{
    int n,pen,note;

    scanf("%d%d%d",&n,&pen,&note);

    if(pen>=n && note>=n){
        printf("Yes");
    }
    else{
        printf("No");
    }

return 0;
}