#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

typedef struct {
    int items[SIZE];
    int top;
} Stack;

int isEmpty(Stack* stack){
    return stack->top == -1;
}

int isFull(Stack* stack){
    return stack->top == SIZE - 1;
}

void push(Stack* stack, int data){
	if(isFull(stack)){
		printf("A pilha esta cheia, nao e possivel empilhar.\n");
	}else{
        stack->top++;
	    stack->items[stack->top] = data;
	    printf("Elemento empilhado: %d.\n", data);
	}
}

int pop(Stack* stack){
	if(isEmpty(stack)){
		printf("A pilha esta vazia, nao e possivel desempilhar.\n");
        return -1;
	}else{
	    int data = stack->items[stack->top];
	    stack->top--;
        printf("Elemento desempilhado: %d.\n", data);
	    return data;
	}
}

void display(Stack* stack){
    if(isEmpty(stack)){
		printf("A pilha esta vazia.\n");
	}else{
	    printf("Elementos da pilha: ");
	    for (int i = stack->top; i >= 0; i--){
            printf("%d ", stack->items[i]);
	    }
	    printf("\n");
	}
}

int main(){
    Stack stack;
    stack.top = -1;

    isFull(&stack);
    isEmpty(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    isFull(&stack);
    isEmpty(&stack);

    display(&stack);

    int element = pop(&stack);
    printf("O elemento desempilhado ficou guardado com o valor: %d\n", element);
    display(&stack);

    pop(&stack);
    pop(&stack);
    pop(&stack);

    display(&stack);

    pop(&stack);
    pop(&stack);

    return 0;
}
