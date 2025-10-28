#include <stdio.h>
#include <string.h>
int isBalanced(char s[]) {
    char stack[1000];  
    int top = -1;      
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (top == -1) return 0; 

            char last = stack[top--];  

            if ((ch == ')' && last != '(') ||
                (ch == '}' && last != '{') ||
                (ch == ']' && last != '[')) {
                return 0; 
            }
        }
    }
    return (top == -1); 
}
int main() {
    char s[1000];
    printf("Enter expression: ");
    scanf("%s", s);
    if (isBalanced(s))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");
    return 0;
}