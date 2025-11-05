#include <stdio.h>

int main(){
    
    int n;
    scanf("%d", &n);

    int triangle[35][35]={0};
    
    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){

            if(j==0 || j==i){
                triangle[i][j]=1;
            }else{
                triangle[i][j]=triangle[i-1][j-1]+triangle[i-1][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d", triangle[i][j]);

            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
