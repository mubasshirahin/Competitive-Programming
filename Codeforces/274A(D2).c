#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    int ans1= a+(b*c);
    int ans2= a*(b+c);
    int ans3 = a*b*c;
    int ans4 = (a+b)*c;
    int ans5 = a+b+c;

   //printf("%d %d %d %d %d \n", ans1,ans2,ans3,ans4, ans5);


    if(ans1>=ans2 && ans1>=ans3 && ans1>=ans4 && ans1>=ans5){
        printf("%d", ans1);
    }
    else if(ans2>=ans1 && ans2>=ans3 && ans2>=ans4 && ans2>=ans5){
        printf("%d", ans2);
    }
    else if(ans3>=ans1 && ans3>=ans2 && ans3>=ans4 && ans3>=ans5){
        printf("%d", ans3);
    }
            else if(ans5>=ans1 && ans5>=ans2 && ans5>=ans4 && ans5>=ans3){
        printf("%d", ans5);
    }
    else{
        printf("%d", ans4);
    }


return 0;
}