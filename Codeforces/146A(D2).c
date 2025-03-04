#include<stdio.h>
#include<string.h>

int main(){
int i,j,l,c=0;
char str[1000];
gets(str);
l=strlen(str);
for(j=0;j<l;j++)
{
    for(i=j+1;i<l;i++)
    {
        if(str[j]==str[i])
        {
            str[j]='0';
        }
    }
 
}
for(i=0;i<l;i++)
{
    if(str[i]!='0')
    {
        c++;
    }
}
if(c%2==0)
   {
       printf("CHAT WITH HER!\n");
   }
   else
   {
       printf("IGNORE HIM!\n");
   }
   return 0;
}