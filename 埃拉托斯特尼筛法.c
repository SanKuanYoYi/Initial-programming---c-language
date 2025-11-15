#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d", &T);
    
    while(T--){
        int n;
        scanf("%d", &n);
        
        if(n <= 2){
            printf("0\n");
            continue;
        }
   
        int isPrime[n+1];
        memset(isPrime, 1, sizeof(isPrime)); 
        
        isPrime[0] = isPrime[1] = 0; 

        for(int i = 2; i * i < n; i++){
            if(isPrime[i]){
                for(int j = i * i; j < n; j += i){
                    isPrime[j] = 0;
                }
            }
        }

        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime[i]){
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
