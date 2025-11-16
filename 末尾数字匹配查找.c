#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int isLast(int num1, int num2, int n) {
    int divisor = 1;
    for(int i = 0; i < n; i++) {
        divisor *= 10;
    }
    return (num1 % divisor) == num2;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    
    int book[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &book[i]);
    }

    qsort(book, n, sizeof(int), compare);
    
    for(int i = 0; i < q; i++) {
        int len, code;
        scanf("%d %d", &len, &code);

        int found = 0;
        for(int j = 0; j < n; j++) {

            if(isLast(book[j], code, len)) {
                printf("%d\n", book[j]);
                found = 1;
                break; 
            }
        }

        if(!found) {
            printf("-1\n");
        }
    }
    
    return 0;
}
