#include <stdio.h>
int main(){

    int a,b,c,d,e,f,g,h,i,j;
    int x=0,t=0;
    int high;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",
         &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    scanf("%d",&high);
    
    int HIGH=high+30;

    int arr[10]={a,b,c,d,e,f,g,h,i,j};

    for (t=0;t<=9;t++ ){
    	if(arr[t]<=HIGH)
		x++ ; 
	}
	
	printf("%d",x);




return 0;


}
