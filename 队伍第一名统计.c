#include<stdio.h>
int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    
    int team[n];
    for(int i=0;i<n;i++){
        team[i]=0;
    }
    
    char arr[n][m];
    for(int i=0;i<n;i++){
        scanf("%s",&arr[i]);
    }
    
    for(int j=0;j<m;j++){

        char max='0';
        for(int i=0;i<n;i++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }

        for(int i=0;i<n;i++){
            if(arr[i][j]==max){
                team[i]=1;
            }
        }
    }

    int count=0;
    for(int i=0;i<n;i++){
        if(team[i]==1){
            count++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}
