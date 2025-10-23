#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    
    int s[1000];
    int p[1000];
    
    for(int i=0;i<3;i++){
    scanf("%d %d",&s[i],&p[i]);}
    
    int a=-1;
    for(int i=0;i<3;i++){
        int num=(n + s[i] - 1) / s[i];
        int price=num*p[i];
        
        if(a == -1 || price < a){
            a = price;
    }
    
        
        
}
    
    printf("%d\n", a);
    
    
    return 0;
}
