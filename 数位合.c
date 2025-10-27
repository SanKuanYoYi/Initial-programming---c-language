#include <stdio.h>
#include <math.h>

int getNum(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + getNum(n / 10);
}

int main() {
    long long n;
    scanf("%lld", &n);
    

    if (n < 0) {
        n = -n;
    }
    
   
    if (n == 0) {
        printf("0");
        return 0;
    }
    
    int sum = getNum(n);
    printf("%d", sum);
    
    return 0;
}
