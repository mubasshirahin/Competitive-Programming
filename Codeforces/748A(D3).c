#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        int max = a;
        if(max<b)  max=b;
        if(max<c)  max=c;

        if(a==b && b==c)
        {
            a=1 ;
            b=1 ;
            c=1 ;
        }

        if(max==a && a!=c && a!=b)
        {
            a=0;
            b=(max+1)-b;
            c=(max+1)-c;
        }

        else if(max==b && b!=a && b!=c)
        {
            b=0;
            a=(max+1)-a;
            c=(max+1)-c;

        }

        else if(max==c && c!=b && c!=a)
        {
            c=0;
            b=(max+1)-b;
            a=(max+1)-a;
        }

        else if(max==a)
        {
            if(a==b)
            {
                a=1;
                b=1;
                c=(max+1)-c;
            }
            if(a==c)
            {
                a=1;
                c=1;
                b=(max+1)-b;
            }
        }

        else if(max==b)
        {
            if(a==b)
            {
                a=1;
                b=1;
                c=(max+1)-c;
            }
            if(b==c)
            {
                b=1;
                c=1;
                a=(max+1)-a;
            }
        }

        else if(max==c)
        {
            if(c==b)
            {
                c=1;
                b=1;
                a=(max+1)-a;
            }
            if(a==c)
            {
                a=1;
                c=1;
                b=(max+1)-b;
            }
        }

        printf("%d %d %d\n",a,b,c);


    }

    return 0;
}
