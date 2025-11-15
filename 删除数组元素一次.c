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
    
    int findpos = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == find){
            findpos = i;
            break; 
        }
    }
    

    if(findpos != -1){

        for(int i = findpos; i < n - 1; i++){
            arr[i] = arr[i + 1];
        }
        n--; 
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}
