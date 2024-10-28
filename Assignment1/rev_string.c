#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

struct Stack {
    int top;
    char items[MAX];
};

void initStack(struct Stack *s) {
    s->top = -1;
}

int isFull(struct Stack *s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s) {
    return s->top == -1;
}

void push(struct Stack *s, char ch) {
    if (isFull(s)) {
        printf("Stack is full\n");
    } else {
        s->items[++(s->top)] = ch;
    }
} 

char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return '\0';
    } else {
        return s->items[(s->top)--];
    }
}


void reverseString(char str[]) {
    struct Stack s;
    initStack(&s);

    for (int i = 0; i < strlen(str); i++) {
        push(&s, str[i]);
    }

    for (int i = 0; i < strlen(str); i++) {
        str[i] = pop(&s);
    }
}


int main() {
    char str[MAX];

    printf("Enter a string: ");
    gets(str);  
    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
