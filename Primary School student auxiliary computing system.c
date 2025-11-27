#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int rangeNumber() {
    return rand() % 10 + 1;
}

int rangeOpt() {
    return rand() % 4;
}

int answer(int num1, int num2, int op) {
	
    switch(op) {
        case 0: return num1 + num2;  
        case 1: return num1 - num2;  
        case 2: return num1 * num2;  
        case 3: return num1 / num2;  
    }
}

char getOpt(int opt) {
	
    switch(opt) {
        case 0: return '+';
        case 1: return '-';
        case 2: return '*';
        case 3: return '/';
    }
}

void CorrectFeedback() {
	
    int choice = rand() % 4;
    
    switch(choice) {
        case 0: printf("Very good!\n"); break;
        case 1: printf("Excellent!\n"); break;
        case 2: printf("Nice work!\n"); break;
        case 3: printf("Keep up the good work!\n"); break;
    }
}

void WrongFeedback() {
	
    int choice = rand() % 4;
    
    switch(choice) {
        case 0: printf("No. Please try again.\n"); break;
        case 1: printf("Wrong. Try once more.\n"); break;
        case 2: printf("Don't give up!\n"); break;
        case 3: printf("Not correct. Keep trying.\n"); break;
    }
}

void CAISystem() {
	
    printf("=====================================\n");
    printf("            CAISystem\n");
    printf("=====================================\n");
    printf("Up to 75%% cottect rate passing\n\n");
    
    double rate = 0;
    int tests = 0;
    int questions = 0;
    int correct = 0;
    
    do {
    	
        tests++;
        printf("--- No.%d ---\n", tests);
        
        int score = 0;
        int correctCount = 0;
        
        for(int i = 1; i <= 10; i++) {
        	
            int num1, num2, opt;
            int flag=0;

            while(!flag) {
                num1 = rangeNumber();
                num2 = rangeNumber();
                opt = rangeOpt();

                if(opt == 1) { 
                    if(num1 >= num2) { 
                        flag=1;
                    }
                } else if(opt == 3) { 
                    if(num2 != 0 && num1 % num2 == 0) { 
                        flag=1;
                    }
                } else { 
                    flag=1;
                }
            }
            
            int correctAnswer = answer(num1, num2, opt);
            int studentAnswer;
            
            printf("\nQuestion %d: %d %c %d = ? ", i, num1, getOpt(opt), num2);
            scanf("%d", &studentAnswer);
            
            if(studentAnswer == correctAnswer) {
                CorrectFeedback();
                score += 10;
                correctCount++;
                correct++;
            } else {
                WrongFeedback();
                printf("The correct answer: %d\n", correctAnswer);
            }
            questions++;
        }
        
        rate = (double)correctCount / 10 * 100;
        printf("\nScore this once: %d/100\n", score);
        printf("Correct rate: %.1f%%\n", rate);
        
        if(rate < 75) {
            printf("lower than 75%%£¬Falied!\n");
            printf("Correct rate: %.1f%%\n\n", (double)correct / questions * 100);
        } else {
            printf("\nPassing!\n\n");
            printf("Total times : %d \n", tests);
            printf("Sum questiongs : %d \n", questions);
            printf("Correct rate: %.1f%%\n\n", (double)correct / questions * 100);
        }
        
    } while(rate < 75);
}

int main() {
	
    srand(time(NULL)); 
    
    CAISystem();
    
    return 0;
}
