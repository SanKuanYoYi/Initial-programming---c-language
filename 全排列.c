#include <stdio.h>

int n = 5;
int arr[10];

void swap(int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void arrange(int step) {

    if (step == n) { 
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }

    for (int i = step; i < n; i++) {
        swap(step, i);    
        arrange(step + 1); 
        swap(step, i);  
    }
}

int main() {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    arrange(0); 
    return 0;
}
