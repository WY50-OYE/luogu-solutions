#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    long long ans = 0; 

    for (int i = 0; i < n; ++i) {
        double a;
        int t;
        scanf("%lf %d", &a, &t);

        long long A = (long long)(a * 1000000.0 + 0.5);

        for (int k = 1; k <= t; ++k) {

            long long index = (k * A) / 1000000;
            
            ans ^= index;
        }
    }

    printf("%lld\n", ans);

    return 0;
}