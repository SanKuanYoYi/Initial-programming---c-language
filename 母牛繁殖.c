#include <stdio.h>

unsigned long long cache[91] = {0};

unsigned long long cows(int n) {

    if (cache[n] != 0)
        return cache[n];

    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

    cache[n] = cows(n - 1) + cows(n - 3);
    return cache[n];
}

int main() {
    int n;

    cache[1] = 1;
    cache[2] = 2;
    cache[3] = 3;

    while (scanf("%d", &n) != EOF) {
        printf("%llu\n", cows(n));
    }
    return 0;
}
