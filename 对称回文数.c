#include <stdio.h>
#include <string.h>

int main() {
    int num;
    printf("请输入一个数字: ");
    scanf("%d", &num);
 
    char original[20];
    sprintf(original, "%d", num);

    char reversed[20];
    int len = strlen(original);

    for(int i = 0; i < len; i++) {
        reversed[i] = original[len - 1 - i];
    }
    reversed[len] = '\0'; 
    char palindrome[40];
    strcpy(palindrome, original);
    strcat(palindrome, reversed + 1);
    
    printf("%s\n", palindrome);
    
    return 0;
}
