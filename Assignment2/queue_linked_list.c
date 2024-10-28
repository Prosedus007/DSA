#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Queue {
    struct Node *front, *rear;
};


struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}


void enqueue(struct Queue* queue, int data) {
    struct Node* temp = newNode(data);


    if (queue->rear == NULL) {
        queue->front = queue->rear = temp;
        return;
    }

    queue->rear->next = temp;
    queue->rear = temp;
}


int dequeue(struct Queue* queue) {

    if (queue->front == NULL)
        return -1;


    struct Node* temp = queue->front;
    int data = temp->data;
    queue->front = queue->front->next;


    if (queue->front == NULL)
        queue->rear = NULL;

    free(temp);
    return data;
}

void displayQueue(struct Queue* queue) {
    struct Node* temp = queue->front;
    if (temp == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements are: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Queue* queue = createQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    displayQueue(queue);

    printf("Dequeued element: %d\n", dequeue(queue));
    printf("Dequeued element: %d\n", dequeue(queue));

    displayQueue(queue);

    enqueue(queue, 40);
    enqueue(queue, 50);

    displayQueue(queue);

    printf("Dequeued element: %d\n", dequeue(queue));

    displayQueue(queue);

    return 0;
}
