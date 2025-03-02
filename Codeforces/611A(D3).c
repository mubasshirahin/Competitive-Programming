#include<stdio.h>

int main()
{
    int n;
    int h,m;
 
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
           int ans=0;
    int count=0;
        scanf("%d%d", &h,&m);

    while(h!=23){
        
        if(h!=23){
            h++;
            count++;
        }
    }

    if(h==23){
        ans = (count*60) + (60-m);
    }

    

    printf("%d\n", ans);

    }

return 0;
}