#include<stdio.h>
int main(){
    
    long long n,m;
    //m>=n
    scanf("%lld %lld",&n,&m);
    
    if(n>m){long long temp=n;n=m;m=temp;}
    
    if(n==1){printf("1");}
    else if(n==2){printf("%d",(m-1)/2+1);}
    else if(n==3 && m==3){printf("8");}
    else printf("%lld",n*m);
    
    
    return 0;
}
