#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
}

int main() {

    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {

        int n;
        scanf("%d", &n);

        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        qsort(arr, n, sizeof(int), compare);

        for (int j = 0; j < n; j++) {
            printf("%d", arr[j]);
            
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
