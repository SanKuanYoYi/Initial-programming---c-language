#include<stdio.h>
int main(){
 
 int num;

 scanf("%d",&num);

 int reversed=0;
 while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    printf("%d",reversed);
    
    return 0;
}
