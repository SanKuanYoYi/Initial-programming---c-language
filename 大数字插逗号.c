#include<stdio.h>
#include<string.h>

int main(){
    
    char N[20]={0};
    scanf("%s",N);
    int len=strlen(N);
    
    if(len%3==1){
        printf("%c",N[0]);

        for(int i=1;i<len;i+=3){
            printf(",");
            printf("%c%c%c",N[i],N[i+1],N[i+2]);
        }
    }
    
    if(len%3==2){
        printf("%c",N[0]);
        printf("%c",N[1]);

        for(int i=2;i<len;i+=3){
            printf(",");
            printf("%c%c%c",N[i],N[i+1],N[i+2]);
        }
    }
    
    if(len%3==0){
        printf("%c%c%c",N[0],N[1],N[2]);
     
        for(int i=3;i<len;i+=3){
            printf(",");
            printf("%c%c%c",N[i],N[i+1],N[i+2]);
        }
    }
    
    
    
    return 0;
}
