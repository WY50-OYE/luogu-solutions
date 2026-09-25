#include <stdio.h>

int main()
{
    long long n;
    if(scanf("%lld",&n) != 1) return 0;

    if(n<0)
    {
        printf("-");
         n = -n;
    }

    long long rev = 0;
    while(n>0)
    {
        rev = rev * 10  + n % 10;
        n /= 10;
    }
    printf("%lld\n",rev);
    return 0;
}