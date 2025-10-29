#include<stdio.h>
int main(){
    
    int t;
    scanf("%d",&t);
    
    int reversedInteger=0;
    int remainder=0;
    while(t!=0) {
     remainder=t%10;
     reversedInteger=reversedInteger * 10 + remainder;
     t/=10;
}
    
    for (int i=2;i<reversedInteger;i++){
         if (reversedInteger%2==0){
             printf("noprime");
             break;
         }
         else{printf("prime");break;}
    }
   

    
    return 0;
}
