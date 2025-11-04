#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    
    int arr[n];
    int show[n];
    int num=0;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        int flag=0; 
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            show[num]=arr[i];
            num++;
        }
    }
    
    for(int i=0;i<num;i++){
        printf("%d ",show[i]);
    }
    
    return 0;
}
