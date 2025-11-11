#include<stdio.h>

int main(){
    
    int n;
    
    while(scanf("%d",&n)!=EOF){
        
        char seat[n][6];
        
        for(int i=0;i<n;i++){
            scanf("%s",seat[i]);
            seat[i][5]='\0';
        }
        
        int flag=0;
        for(int i=0;i<n && (!flag);i++){
            
            if(seat[i][0]=='O' && seat[i][1]=='O'){
                seat[i][0]='+';
                seat[i][1]='+';
                flag=1;
                break;
                
            }else if(seat[i][3]=='O' && seat[i][4]=='O'){
                seat[i][3]='+';seat[i][4]='+';flag=1;break;
            }
        }
        
        if(flag)printf("YES\n");
        else{
            printf("NO\n");
            continue;
        }
        for(int i=0;i<n;i++){
            printf("%s\n",seat[i]);
        }
    }
}
