#include<stdio.h>
#include<string.h> 

int isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    char str[1000];
    
    scanf("%s", str);
    int len = strlen(str);

    int left = 0, right = len - 1;
    
    while (left < right) {

        while (left < right && !isVowel(str[left])) {
            left++;
        }

        while (left < right && !isVowel(str[right])) {
            right--;
        }

        if (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
    
    printf("%s\n", str);
    return 0;
}
