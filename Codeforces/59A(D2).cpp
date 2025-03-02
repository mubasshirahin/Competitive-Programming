#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];
    scanf("%s", str);

    int lower=0;
    int upper=0;

    int size = strlen(str);

    for(int i=0;i<size;i++){
        if(str[i]>=65 && str[i]<=90){
            upper++;
        }
        else{
            lower++;
        }
    }

    if(upper>lower){
        for(int i=0;i<size;i++){
            if(str[i]>=65 && str[i]<=90){
                continue;
            }
            else{
                str[i] = str[i] - 32;
            }
        }
    }

    else{
        for(int i=0;i<size;i++){
            if(str[i]>=65 && str[i]<=90){
                str[i] = str[i] + 32;
            }
            else{
                continue;
            }
        }

    }

    printf("%s", str);

    




return 0;
}