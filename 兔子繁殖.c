#include <stdio.h>

unsigned long long cache[91] = {0};

unsigned long long rabbit(int n) {
    
    if (cache[n] != 0) 
        return cache[n]; 

    if (n == 1) return 1;
    if (n == 2) return 2;

    cache[n] = rabbit(n - 1) + rabbit(n - 2);
    return cache[n];
}

int main() {
    int n;

    cache[1] = 1;
    cache[2] = 2;

    while (scanf("%d", &n) != EOF) {
        printf("%llu\n", rabbit(n));
    }
    return 0;
}
