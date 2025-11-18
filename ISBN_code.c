#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    
    char code[20];
    int num[20];
    
    scanf("%s",code);

    int j=0;
    for(int i=0;code[i]!='\0' && j<9;i++){
        if(isdigit(code[i])){
            num[j]=code[i]-'0'; 
            j++;
        }
    }
    
    int len=strlen(code);
    int sum=0;
    int mul=1;
    
    for(int i=0;i<j;i++){
        sum=sum+num[i]*mul;
        mul++;
    }
    
    int mod=sum%11;
    
    if(mod==10){
        if(code[len-1]=='X'){
            printf("Right");
        }
        else {code[len-1]='X';
              printf("%s",code);}
    }
    
    else if(mod==code[len-1]-'0'){
        printf("Right");
    }
    
    else {
        code[len-1]=mod+'0';
        
            printf("%s",code);
    }
    
    
    
    
    return 0;
}
