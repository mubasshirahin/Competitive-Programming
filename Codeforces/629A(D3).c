#include<stdio.h>

// int fun(int a,int b){
//     int count=0;
//         for(int i=1;a%b!=0;i++){
//                 a=a+1;
//             count++;
//         }
//         return count;
// }


int main()
{
    // int a,b;
    // int ans;
    // int n;
    

    // scanf("%d", &n);

    // for(int i=1;i<=n;i++){
    //     int count =0;
    //     scanf("%d%d", &a,&b);
    //     for(int j=1;a%b!=0;j++){
    //         a=a+1;
    //         count++;
    //     }

    //     printf("%d\n", count);
    // }

    int a,b,c;
  scanf("%d",&a);
  for(int i=0;i<a;i++)
  {
    scanf("%d %d",&b,&c);
    if(b%c==0){printf("%d\n",b%c);}
    else {printf("%d\n",c-(b%c));}
  }



return 0;
}