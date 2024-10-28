#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory error\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int isEmpty(struct Node* top) {
    return top == NULL;
}

void push(struct Node** top, char data) {
    struct Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
}


char pop(struct Node** top) {
    if (isEmpty(*top)) {
        return '\0';
    }
    struct Node* temp = *top;
    char popped = temp->data;
    *top = (*top)->next;
    free(temp);
    return popped;
}

int isOpeningBracket(char ch) {
    return (ch == '(' || ch == '{' || ch == '[');
}

int isClosingBracket(char ch) {
    return (ch == ')' || ch == '}' || ch == ']');
}


int isMatchingPair(char open, char close) {
    return ((open == '(' && close == ')') ||
            (open == '{' && close == '}') ||
            (open == '[' && close == ']'));
}

int checkBalancedParentheses(char* expression) {
    struct Node* stack = NULL;
    
    for (int i = 0; i < strlen(expression); i++) {
        if (isOpeningBracket(expression[i])) {

            push(&stack, expression[i]);
        } else if (isClosingBracket(expression[i])) {

            char popped = pop(&stack);
            if (!isMatchingPair(popped, expression[i])) {
                return 0;  
            }
        }
    }

    return isEmpty(stack);
}


int main() {
    char expression[100];

    printf("Enter an expression: ");
    gets(expression); 

    if (checkBalancedParentheses(expression)) {
        printf("The expression has balanced parentheses.\n");
    } else {
        printf("The expression does not have balanced parentheses.\n");
    }

    return 0;
}
