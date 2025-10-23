#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    int n, count = 0;
    
  
    scanf("%[^\n]", a);
    n = strlen(a);
    
    for(int i = 0; i < n; i++){
        if(a[i] != ' '){
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
