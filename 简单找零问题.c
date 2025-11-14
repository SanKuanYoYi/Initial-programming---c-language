#include<stdio.h>
int main(){
    
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    int flag=0;
    for(int i=0;i<=c/a;i++){
        
        int n=c-i*a;
        if(n%b==0){
            flag=1;
            break;
        }
            
    }
    
    if(flag)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
