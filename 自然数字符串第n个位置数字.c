#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
 
    char result;
    int count = 0;  
    int num = 1;   
    
    while (count < n) {
        char buffer[10];  
        sprintf(buffer, "%d", num); 
        
  
        for (int i = 0; i < strlen(buffer); i++) {
            count++;
            if (count == n) {
                result = buffer[i];
                break;
            }
        }
        
        num++;
    }
    
    printf("%c\n", result);
    return 0;
}
