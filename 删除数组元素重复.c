#include<stdio.h>
int main(){
    
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    int find;
    scanf("%d", &find);
    
    int found = 0;
    int newSize = n; 

    for(int i = 0; i < newSize; i++){
        if(arr[i] == find){
            found = 1;

            for(int j = i; j < newSize - 1; j++){
                arr[j] = arr[j + 1];
            }
            newSize--; 
            i--; 
        }
    }

    if(found){
 
        for(int i = 0; i < newSize; i++){
            printf("%d ", arr[i]);
        }
    } else {
 
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}
