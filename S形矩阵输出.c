#include<stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[n][n];
	int l=0;
	int r=n-1;
	int top=0;
	int bottom=n-1;
	int num=1;
	
	
	while(num<=n*n){
			
		for(int i=0;i<=r;i++){
		
		arr[top][i]=num;
		num++;	
	}
	top++;
	
	    int temp=r;
	    for(int i=temp;i>=0;i--){
		
		arr[top][i]=num;
		num++;	
	}
	top++;
	
}
	
	for(int i=0;i<n;i++){
		
		for(int j=0;j<n;j++){
			
		printf("%4d ",arr[i][j]);
		}
		printf("\n"); 
	}
	

	
	return 0;
}
