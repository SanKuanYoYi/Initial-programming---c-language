#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    
    char sentence[1001];
    fgets(sentence,1001,stdin);
    
    int len=strlen(sentence);

    int i=0;
    int spacenum=0;
    
    do{
    	if(isspace(sentence[i])){
    		spacenum++;
		}
		i++;
	}while(sentence[i]!='\0');
        
    printf("%d",len-spacenum);
    
    return 0;
}
