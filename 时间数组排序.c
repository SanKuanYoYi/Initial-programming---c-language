#include<stdio.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    int h[n],m[n],s[n];

    for(int i=0;i<n;i++){
        scanf("%d %d %d", &h[i],&m[i],&s[i]);
    }
    

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
     
            if(h[j]>h[j+1]){

                int temp=h[j];
                h[j]=h[j+1];
                h[j+1]=temp;

                temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;

                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }

            else if(h[j]==h[j+1] && m[j]>m[j+1]){
 
                int temp=m[j];
                m[j]=m[j+1];
                m[j+1]=temp;
   
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
 
            else if(h[j]==h[j+1] && m[j]==m[j+1] && s[j]>s[j+1]){
       
                int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d %d %d\n",h[i],m[i],s[i]);
    }
    
    return 0;
}
