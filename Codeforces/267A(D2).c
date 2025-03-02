#include<stdio.h>

int main()
{
    int n;
    int p,q;     
    int count=0;          //q=capasity    p=available

    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d %d", &p,&q);
        int vacant = q-p;
        if(vacant>=2){
            count++;
        }
    }

printf("%d", count);

return 0;
}