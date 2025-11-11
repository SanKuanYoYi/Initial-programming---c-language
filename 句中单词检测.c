#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char word[20];
    char sentence[1000];
    
  
    scanf("%s", word);
    getchar(); 
    fgets(sentence, sizeof(sentence), stdin);
    
    int word_len = strlen(word);
    int sentence_len = strlen(sentence);
    int count = 0;
    int first_pos = -1;

    for(int i = 0; i <= sentence_len - word_len; i++){

        int is_word_start = (i == 0 || sentence[i-1] == ' ');

        int is_word_end = (i + word_len == sentence_len || 
                          sentence[i + word_len] == ' ' || 
                          sentence[i + word_len] == '\n');
        

        if(is_word_start && is_word_end){
     
            int match = 1;
            for(int j = 0; j < word_len; j++){
                if(tolower(word[j]) != tolower(sentence[i + j])){
                    match = 0;
                    break;
                }
            }
    
            if(match){
                if(count == 0){
                    first_pos = i; 
                }
                count++;
            }
        }
    }

    if(count > 0){
        printf("%d %d", count, first_pos);
    } else {
        printf("-1");
    }
    
    return 0;
}
