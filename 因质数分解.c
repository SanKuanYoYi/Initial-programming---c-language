#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        printf("%d = ", n);
        int first = 1; 

        while (n % 2 == 0) {
            if (!first) {
                printf(" * ");
            }
            printf("2");
            first = 0;
            n /= 2;
        }

        for (int i = 3; i <= n; i += 2) {
            while (n % i == 0) {
                if (!first) {
                    printf(" * ");
                }
                printf("%d", i);
                first = 0;
                n /= i;
            }
        }

        printf("\n");
    }
    return 0;
}
