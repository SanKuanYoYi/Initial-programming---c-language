#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    
    int prime[10000];
    int count = 0;
    int num = 2;

    while (count < N) {
        if (isPrime(num)) {
            prime[count++] = num;
        }
        num++;
    }
    
    int printed = 0;
    for (int i = M - 1; i < N; i++) {
        printf("%d ", prime[i]);
        printed++;
        
        if (i == N - 1) {
            break; 
  }
        if (printed % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}
