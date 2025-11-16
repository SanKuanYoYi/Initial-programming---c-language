#include<stdio.h>

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    int pos = a + 1;
    if (n - b > pos) {
        pos = n - b;
    }
    
    int dif = n - pos + 1;
    if (dif < 0) {
        dif = 0;
    }
    
    printf("%d", dif);
    
    return 0;
}
