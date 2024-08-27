//WAP TO INFIX TO POSTFIX 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Function to check if a character is an operator
int isOperator(char ch) {
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

// Function to get the precedence of an operator
int getPrecedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else
        return 0;
}

// Function to convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i, j = 0;
    char stack[MAX_SIZE];
    int top = -1;

    for (i = 0; i < strlen(infix); i++) {
        char ch = infix[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            postfix[j++] = ch;
        } else if (ch == '(') {
            stack[++top] = ch;
        } else if (ch == ')') {
            while (top != -1 && stack[top] != '(') {
                postfix[j++] = stack[top--];
            }
            if (top != -1)
                top--; // Pop '('
        } else if (isOperator(ch)) {
            while (top != -1 && getPrecedence(stack[top]) >= getPrecedence(ch)) {
                postfix[j++] = stack[top--];
            }
            stack[++top] = ch;
        }
    }

    while (top != -1) {
        postfix[j++] = stack[top--];
    }

    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

   printf("Postfix Expression : %s\n",postfix);

   return 0;
}
