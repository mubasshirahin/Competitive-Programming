#include <stdio.h>

int main() {
    long long int t;
    scanf("%lld", &t);

    while (t--) {
        long long int a, b, c, n;
        scanf("%lld %lld %lld %lld", &a, &b, &c, &n);

        long long int x = (a + b + c + n) / 3;


        long long int A = x - a;
        long long int B = x - b;
        long long int C = x - c;

        if (A + B + C <= n && (A >= 0 && B >= 0 && C >= 0) && (n-(A+B+C))%3==0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
