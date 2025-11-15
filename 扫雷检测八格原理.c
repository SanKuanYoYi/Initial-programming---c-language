#include<stdio.h>
int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);
    
    char arr[a+2][b+2];
    
    for(int i=0;i<a+2;i++){
        for(int j=0;j<b+2;j++){
            arr[i][j]='?';
        }
    }
    
    for(int i=1;i<a+1;i++){
        getchar();
        for(int j=1;j<b+1;j++){
            scanf("%c",&arr[i][j]);
        }  
    }
    
    for(int i=1;i<a+1;i++){
        for(int j=1;j<b+1;j++){
            
            int count=0;
            if(arr[i][j]!='*'){
                if(arr[i-1][j-1]=='*'){count++;}
                if(arr[i-1][j]=='*'){count++;}
                if(arr[i-1][j+1]=='*'){count++;}
                if(arr[i][j-1]=='*'){count++;}
                if(arr[i][j+1]=='*'){count++;}
                if(arr[i+1][j-1]=='*'){count++;}
                if(arr[i+1][j]=='*'){count++;}
                if(arr[i+1][j+1]=='*'){count++;}
                
                arr[i][j]=count+'0';
            }
        }  
    }
    
    for(int i=1;i<a+1;i++){
        for(int j=1;j<b+1;j++){
            printf("%c",arr[i][j]);
        }  
        printf("\n");
    }
    
    
    return 0;
}
