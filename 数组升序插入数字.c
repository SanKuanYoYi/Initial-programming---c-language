#include<stdio.h>
int main(){
    
    int N;
    scanf("%d",&N);
    
    int arr[N+1];
    for(int i=0;i<N;i++){
   
        scanf("%d",&arr[i]);
    }
    
    int insert;
    scanf("%d",&insert);
    
    int a=N;
    for(int i=0;i<N+1;i++){
        
        if(arr[i]>insert){
        
            a=i;
            break;}
    }
    
    for(int i=N;i>a;i--){
        
        arr[i]=arr[i-1];
        
    }
    
    arr[a]=insert;
    
    for(int i=0;i<N+1;i++){
        printf("%d ",arr[i]);
    }
    
    
    
    return 0;
}
