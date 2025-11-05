#include<stdio.h>
#include<string.h>

int main(){
	
	char a[100001];
	char* p=a;
	fgets(p,100001,stdin);
	
	int len=strlen(a);
	if(len>0 && a[len-1]=='\n'){
		a[len-1]='\0';
		len--;
    }
	//scanf("%100000[^\n]", a);
	
	int left=0;
	int right=strlen(a)-1;
	
	while(left<right){
		
		char temp=a[left];
		a[left]=a[right];
		a[right]=temp; 
		
		left++;
		right--;
		
	}
	
	printf("%s",a);
	
	
	return 0;
}
