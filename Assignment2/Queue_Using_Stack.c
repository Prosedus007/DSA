#include <stdio.h>
#include <stdlib.h>

struct StackNode {
    int data;
    struct StackNode* next;
};


struct Stack {
    struct StackNode* top;
};

struct StackNode* newNode(int data) {
    struct StackNode* stackNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}


int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}


void push(struct Stack* stack, int data) {
    struct StackNode* stackNode = newNode(data);
    stackNode->next = stack->top;
    stack->top = stackNode;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack))
        return -1;
    struct StackNode* temp = stack->top;
    stack->top = stack->top->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

void enqueue(struct Stack* stack1, int data) {
    push(stack1, data);
}

int dequeue(struct Stack* stack1, struct Stack* stack2) {
    if (isEmpty(stack1) && isEmpty(stack2)) {
        printf("Queue is empty.\n");
        return -1;
    }

    if (isEmpty(stack2)) {
        while (!isEmpty(stack1)) {
            push(stack2, pop(stack1));
        }
    }

    return pop(stack2);
}

void displayQueue(struct Stack* stack1, struct Stack* stack2) {
    struct StackNode* temp1 = stack1->top;
    struct StackNode* temp2 = stack2->top;

    printf("Queue elements are: ");

    while (temp2 != NULL) {
        printf("%d ", temp2->data);
        temp2 = temp2->next;
    }

    while (temp1 != NULL) {
        printf("%d ", temp1->data);
        temp1 = temp1->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack1 = (struct Stack*)malloc(sizeof(struct Stack));
    stack1->top = NULL;
    struct Stack* stack2 = (struct Stack*)malloc(sizeof(struct Stack));
    stack2->top = NULL;

    enqueue(stack1, 10);
    enqueue(stack1, 20);
    enqueue(stack1, 30);

    displayQueue(stack1, stack2);

    printf("Dequeued element: %d\n", dequeue(stack1, stack2));
    printf("Dequeued element: %d\n", dequeue(stack1, stack2));

    displayQueue(stack1, stack2);

    enqueue(stack1, 40);
    enqueue(stack1, 50);

    displayQueue(stack1, stack2);

    printf("Dequeued element: %d\n", dequeue(stack1, stack2));

    displayQueue(stack1, stack2);

    return 0;
}
