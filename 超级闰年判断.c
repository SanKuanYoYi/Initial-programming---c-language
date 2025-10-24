#include <stdio.h>

    int superPY(int N){
    	
    	int a=N/1000%10;
        int b=N/100%10;
        int c=N/10%10;
        int d=N/1%10;
        int n=0; 
    
     int M[4]={a,b,c,d};
    
    if((N%4==0) && (N%100!=0) || N%400==0){
        
    for(int i=0;i<=3;i++){
        if(M[i]%3==0){n++;}
    }    
       if(n==2){return 1;
	   } 
    }
    else return 0;  
}

int main()
{
	int N;  
    scanf("%d",&N);
    
    superPY(N);
    if(superPY(N)==1){printf("Yes");}
    else {printf("No");}
    
	
	return 0;
}
