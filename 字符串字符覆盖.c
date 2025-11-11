#include<stdio.h>
#include<string.h>

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    char str[101];
    scanf("%s",str);
    
    for(int i=0;i<m;i++){
        
        int a,b;
        char c,d;
        scanf("%d %d %c %c",&a,&b,&c,&d);
        
        for(int j=a-1;j<=b-1;j++){
            if(str[j]==c){
                str[j]=d;
            }
        }
    }
    
    printf("%s",str);
    
    return 0;
}
