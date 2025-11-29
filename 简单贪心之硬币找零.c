#include<stdio.h>
#include<stdlib.h>

int compare(const void* a,const void* b){
	return *(int*)b-*(int*)a;
}

int main(){
	
	//flexible changing 
	int coins[4]={1,5,10,25};

	int n;
	scanf("%d",&n);
	
	qsort(coins,4,sizeof(int),compare);
	
	int count=0;
	int rem=n;
	int len=sizeof(coins)/sizeof(coins[0]);
	
	for(int i=0;i<len;i++){
		count+=rem/coins[i];
		rem%=coins[i];
	}

	printf("%d\n",count);
	
	return 0;
}
