#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);
    
    int m = 0;
    
    while ((m + 1) * (m + 2) / 2 <= K) {
        m++;
    }
    
   
    int days = m * (m + 1) / 2;
    
    int coins = m * (m + 1) * (2 * m + 1) / 6;
   
    int rem = K - days;
    coins += rem * (m + 1);
    
    printf("%d\n",coins);
    
    return 0;
}
