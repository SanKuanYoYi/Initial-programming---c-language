#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    
    float l[1000];
    int s[1000];
    
    for(int i=0;i<n;i++){
        float a;
        int b;
        
        scanf("%f %d",&a,&b);
        l[i]=a;  s[i]=b;
    }
    
    float x;  float x1=0;
    int y=0;  
    for(int i=0;i<n;i++){
        x=l[i]*s[i];
        x1+=x;
        
        y+=s[i];
    }
    
    printf("%.1f",(float)x1/y);
    
    
    return 0;
}
