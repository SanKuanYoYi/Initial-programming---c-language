#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(long long*)a - * (long long*)b);
}

int main() {
    
    long long n, p;
    scanf("%lld %lld", &n, &p);

    long long num[n];
    for (long long i = 0; i < n; i++) {
        scanf("%lld", &num[i]);
    }

    qsort(num, n, sizeof(long long), compare);

    long long max_count = 0;

    for (long long i = 0; i < n; i++) {
        long long m = num[i];

        for (long long j = i; j < n; j++) {
            long long M = num[j];

            if (M <= m * p) {

                if (j - i + 1 > max_count) {
                    max_count = j - i + 1;
                }
            } else {

                break;
            }
        }
    }

    printf("%lld\n", max_count);

    return 0;
}
