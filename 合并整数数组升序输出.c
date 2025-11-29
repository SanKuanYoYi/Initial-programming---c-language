#include<stdio.h>
#include<stdlib.h>

int compare(const void*a, const void*b) {
    return *(int*)a - *(int*)b;
}

int main() {

    int n;
    int m;

    scanf("%d", &n);
    scanf("%d", &m);

    int arr1[n];
    int arr2[m];
    int arr3[n + m];

    int index = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        arr3[index++] = arr1[i];
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
        arr3[index++] = arr2[i];
    }

    qsort(arr3, m + n, sizeof(int), compare);

    for(int i = 0; i < m + n; i++) {
        if(i == 0 || arr3[i] != arr3[i - 1]) {
            printf("%d ", arr3[i]);
        }
    }

    return 0;
}
