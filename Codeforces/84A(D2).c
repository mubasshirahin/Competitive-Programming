#include<stdio.h>
#include<math.h>

int main()
{
    long long int  n,flag;
    scanf("%lld", &n);

    int count=0;

    for(int i=1;n!=0;i++){
        int ld = n%10;
        n = n/10;
        if(ld==0){
            flag = 0;
        }
        else if(ld==4 || ld==7){
           // flag = 1;
            count++;
        }
        else{
            flag = 0;
        }

    //printf("%d %d %d   ", ld,flag,count);
    }

if((count==4 || count ==7)){
    printf("YES");
}
else{
    printf("NO");
}


return 0;
}


//4744000695826
// 10000000004744744