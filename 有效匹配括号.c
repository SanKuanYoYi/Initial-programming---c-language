#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    // 奇数长度直接返回false
    if (len % 2 != 0) return false;
    
    char stack[len + 1];  // 使用数组模拟栈
    int top = -1;  // 栈顶指针
    
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        
        // 如果是左括号，入栈
        if (ch == '(' || ch == '[' || ch == '{') {
            stack[++top] = ch;
        }
        // 如果是右括号
        else {
            // 栈为空，无法匹配
            if (top == -1) return false;
            
            // 获取栈顶元素
            char topChar = stack[top];
            
            // 检查是否匹配
            if ((ch == ')' && topChar == '(') ||
                (ch == ']' && topChar == '[') ||
                (ch == '}' && topChar == '{')) {
                top--;  // 匹配成功，出栈
            } else {
                return false;  // 不匹配
            }
        }
    }
    
    // 如果栈为空，说明所有括号都匹配成功
    return top == -1;
}

int main() {
    // 测试用例
    char* test_cases[] = {
        "()", "()[]{}", "(]", "([)]", "{[]}", "", "((()))", "[(])"
    };
    
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        printf("输入: \"%s\"\n", test_cases[i]);
        printf("输出: %s\n\n", isValid(test_cases[i]) ? "true" : "false");
    }
    
    return 0;
}
