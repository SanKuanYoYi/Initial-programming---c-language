#include<stdio.h>
int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    int arr[n];
    int brr[m];
    int crr[m+n];
    int all=m+n;
    
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    
    
    for(int i=0;i<m;i++){
        
        scanf("%d",&brr[i]);
    }
    
    int i=0,j=0,k=0;
 
    while(i<n && j<m){
        if(arr[i]<=brr[j]){
            crr[k]=arr[i];
            k++;i++;
        }else{
            crr[k]=brr[j];
            k++;j++;
        }
    }

    while(i<n){
        crr[k]=arr[i];
        k++;i++;
    }

    while(j<m){
        crr[k]=brr[j];
        k++;j++;
    }

    for(int i=0;i<n+m;i++){
        printf("%d ",crr[i]);
    }
    
    
    return 0;
}
