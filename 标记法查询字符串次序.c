#include<stdio.h>
#include<string.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    char s[201][100];
    int count=0;
    
    int flag[201]={0};
    char temp[100];

    for(int i=0;i<n;i++){
        scanf("%s",temp);
        
        int found=0;
        for(int j=0;j<count;j++){
            if(strcmp(s[j],temp)==0){
            found=1;
            break;
            }
        }
        
        if(!found){
            strcpy(s[count++],temp);
        }      
    }
    
    for(int i=0;i<count;i++){
        if(strcmp(s[i],"younik")==0){
            printf("%d\n",i+1);
        }
    }
    
    
    return 0;
}
