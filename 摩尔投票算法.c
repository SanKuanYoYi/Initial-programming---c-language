#include<stdio.h>

int main(){
    int n = 0;
    scanf("%d", &n);
    
    long long num[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &num[i]);
    }

    long long candidate = num[0];
    int count = 1;
    
    for(int i = 1; i < n; i++){
        if(num[i] == candidate){
            count++;
        } else {
            count--;
            if(count == 0){
                candidate = num[i];
                count = 1;
            }
        }
    }
    
    printf("%lld", candidate);
    return 0;
}
