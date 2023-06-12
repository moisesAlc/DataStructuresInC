#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct {
    int items[SIZE];
    int front;
    int rear;
} Queue;

int isEmpty(Queue* queue){
	if(queue->rear == -1)
		return 1;
	else
		return 0;
}

int isFull(Queue* queue){
	if(queue->rear == SIZE - 1)
		return 1;
	else
		return 0;
}

void enqueue(Queue* queue, int data){
	if(isFull(queue)){
		printf("A fila está cheia, não é possível enfileirar.\n");
	}else{
	    if (isEmpty(queue)){
            queue->front = 0;
	    }
	    queue->rear++;
	    queue->items[queue->rear] = data;
	    printf("Elemento enfileirado: %d.\n", data);
	}
}

int dequeue(Queue* queue){
	if(isEmpty(queue)){
		printf("A fila está vazia, não é possível desenfileirar.\n");
	}else{
	    int data = queue->items[queue->front];
	    queue->front++;
	    if (queue->front > queue->rear){
            queue->front = -1;
            queue->rear = -1;
	    }
	    return data;
	}
}

void display(Queue* queue){
    if(isEmpty(queue)){
		printf("A fila está vazia.\n");
	}else{
	    printf("Elementos da fila: ");
	    for (int i = queue->front; i <= queue->rear; i++){
            printf("%d ", queue->items[i]);
	    }
	    printf("\n");
	}
}

int main(){
    Queue queue;
    queue.front = -1;
    queue.rear = -1;

    isFull(&queue);
    isEmpty(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);

    isFull(&queue);
    isEmpty(&queue);

    display(&queue);

    int element = dequeue(&queue);
    printf("Elemento desenfileirado: %d\n", element);

    display(&queue);

    return 0;
}
