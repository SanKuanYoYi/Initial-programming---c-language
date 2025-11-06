#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    int num = 1;
    

    for (int k=0;k<2*n-1;k++){
        if(k%2==0){
     
            for (int i=(k<n?k:n-1);i>=0;i--){
                int j=k-i;
                if(j>=0 && j<n){
                    matrix[i][j]=num++;
                }
            }
        } else{

            for (int i=0;i<n;i++){
                int j=k-i;
                if (j>=0 && j<n){
                    matrix[i][j]=num++;
                }
            }
        }
    }
 
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
