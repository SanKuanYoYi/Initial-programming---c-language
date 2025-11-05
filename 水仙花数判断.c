#include<stdio.h>
#include<math.h>

int dignum=0;
int sum=0;

int count(int x){
    if(x==0)return 0;
    return 1+count(x/10);
}
int compute(int x,int dignum){
    if(x==0)return 0;
    return pow(x%10,dignum)+compute(x/10,dignum);
}

int main() {
	
    int l, r;
    scanf("%d %d",&l,&r);
    
    int yes=0;
    for(int i=l;i<=r;i++){
       
        dignum=count(i);
        
        if(i==compute(i,dignum)){
            printf("%d  ",i);
            yes=1;
        }
    }
    
    if(!yes){
        printf("no found");
    }
    
    return 0;
}
