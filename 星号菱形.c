#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        
        for (int i = 1; i <= n; i++) {
            
            for (int j = 1; j <= n - i; j++) {
                printf(" ");
            }
            
            for (int j = 1; j <= 2 * i - 1; j++) {
                printf("*");
            }
            printf("\n");
        }
        
        for (int i = n + 1; i <= 2 * n - 1; i++) {
            
            for (int j = 1; j <= i - n; j++) {
                printf(" ");
            }
          
            for (int j = 1; j <= 2 * (2 * n - 1 - i) + 1; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
