#include<stdio.h>

int main()
{
    int n;
    int a,b,c;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&a,&b,&c);

        if(a+b==c || a+c==b || b+c == a){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }


    }

return 0;
}