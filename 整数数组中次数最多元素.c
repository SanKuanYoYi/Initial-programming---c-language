#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
 
    qsort(arr, n, sizeof(int), compare);
    
    int max = 1; 
    int temp = 1;
    int num = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            temp++;
            if(temp > max){
                max = temp;
                num = arr[i];
            }
        } else {
            temp = 1;
        }
    }
    
    printf("%d", num);
    
    return 0;
}
