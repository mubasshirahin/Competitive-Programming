// #include<stdio.h>

// int main()
// {
//         int n, k, l, c, d, p, nl, np;
//     scanf("%d%d%d%d%d%d%d", &n,&k,&l,&c,&d,&p,&nl,&np);

//     int drinks = k*l;
//     int ans1 = drinks/nl;

//     int ans2 = c*d;

//     int ans3 = p/np;

//     int min;

//     if(ans1>ans2 && ans3>ans2){
//         min = ans2;
//     }
//     else if(ans2>ans1 && ans3>ans1){
//         min = ans1;
//     }
//     else{
//         min = ans3;
//     }

//     int fAns = min/3;

//     printf("%d", fAns);



// return 0;
// }



#include<stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int drinks = k * l;
    int ans1 = drinks / nl;
    int ans2 = c * d;
    int ans3 = p / np;

    int min;

    if (ans1 > ans2 && ans3 > ans2) {
        min = ans2;
    } else if (ans2 > ans1 && ans3 > ans1) {
        min = ans1;
    } else {
        min = ans3;
    }

    int fAns = min / n;

    printf("%d", fAns);

    return 0;
}
