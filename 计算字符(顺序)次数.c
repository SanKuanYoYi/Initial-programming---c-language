#include <stdio.h>
#include <string.h>

int main() {

    char str[100001];
    scanf("%s", str);
    
    int len = strlen(str);
    long long count = 0;
    long long p = 0;  
    long long pa = 0; 
    
    for (int i = 0; i < len; i++) {

        if (str[i] == 'P') {
            p++;  

        } else if (str[i] == 'A') {
            pa += p;
            
        } else if (str[i] == 'T') {
            count += pa;
        }
    }
    
    printf("%lld", count % 1000000007);
    
    return 0;
}
