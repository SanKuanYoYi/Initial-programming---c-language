#include<stdio.h>
int main(){
    
   
    int res[1000];
    int x=0;
    int a,b;
        
    for(int i=0;;i++){
        scanf("%d %d",&a,&b);
        res[i]=a+b;
        x++;
        
        if(a==0 && b==0){break;}
    }
   
    
   for(int i = 0; i < x-1; i++){
        printf("%d\n", res[i]);}
    
    
    
    
    
    return 0;
}
