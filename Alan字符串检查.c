#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    char name[1001];
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%s", name);
        int len = strlen(name);
        
        for(int j = 0; j <= len - 4; j++) {
     
            if((tolower(name[j]) == 'a') && 
               (tolower(name[j+1]) == 'l') && 
               (tolower(name[j+2]) == 'a') && 
               (tolower(name[j+3]) == 'n')) {
                count++;
                break; 
            }
        }
    }
    
    printf("%d", count);
    return 0;
}
