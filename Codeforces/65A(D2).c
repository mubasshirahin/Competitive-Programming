#include<stdio.h>
#include<string.h>


int main()
{
    int n;
    char ch[100] ;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        scanf("%s", &ch);

            int len = strlen(ch);

    if(len>10){
    

    printf("%c", ch[0]);
    printf("%d", (len-2));
    printf("%c\n", ch[len-1]);
    }

    else{
        printf("%s\n", ch);
    }

    }
    
    





return 0;
}