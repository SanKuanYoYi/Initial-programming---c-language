#include<stdio.h>
int main(){
    
    int x,y;
    scanf("%d %d",&x,&y);
    
    int n;
    scanf("%d",&n);
    
    int add=0;
    for (int i=x;i<=y;i++){
         int num=i;
         int arr[10];
         int count=0;
         int sum=0;
        while (num>0){
            arr[count]=num%10;  
            count++;
            num=num/10;}
            
            for (int j=0;j<count;j++){
            sum+=arr[j];}
            
            if(sum%n==0){add++;} 
    }
    
    printf("%d",add);
    
    
    return 0;
}
