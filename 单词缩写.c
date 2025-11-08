#include<stdio.h>
#include <string.h>
#include<ctype.h>

int main(){
    
    char str[5098];
    fgets(str,sizeof(str),stdin);
    
    char UpAlp[100];
    UpAlp[0]=str[0];
    
    int num=0;
    
    if(str[0]!=' ' && str[0]!='\0'){
        UpAlp[num]=str[0];
        num++;
    }
    
    for(int i=1;str[i]!='\0';i++){
        
        if(str[i]==' ' && str[i+1]!=' '){
            UpAlp[num]=str[i+1];
            num++;
        }
    }
    
    for(int i=0;i<num;i++){
        
        UpAlp[i]=toupper(UpAlp[i]);
        printf("%c",UpAlp[i]);
    }
    
    return 0;
}

