#include<stdio.h>
int main(){
    
    char str[100001];
    int alpha[26]={0};
    
    int i=0;
    while(scanf("%c",&str[i])!=EOF){
        
        if(str[i]>='a' && str[i]<='z'){
            alpha[str[i]-'a']++;
        }
        i++;
    }
    
    for(int i=0;i<26;i++){
        if(alpha[i]>0){
            printf("%c:%d\n",'a'+i,alpha[i]);
        }
    }
    
    
    
    return 0;
}
