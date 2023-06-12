#include<stdio.h>
#include<stdlib.h>

int main() {
    int tamanho;
    int *ponteiro_vetor;

    printf("Entre o tamanho do vetor: ");
    scanf("%d", &tamanho);

    ponteiro_vetor = (int *)malloc(tamanho * sizeof(int));

    if (ponteiro_vetor == NULL) {
        printf("Falha na alocacao de memoria\n");
        return 1;
    }

    /* 
    Tendo declarado com o malloc, 
    o índice 1 tem um valor
    qualquer da memória.
    Se usássemos o calloc, 
    ao invés de recebermos
    um valor aleatório na linha abaixo,
    receberíamos o valor zero.
    */
    printf("%d\n", ponteiro_vetor[1]);

    printf("Entre %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &ponteiro_vetor[i]);
    }

    printf("Os elementos do vetor sao: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", ponteiro_vetor[i]);
    }
    printf("\n");

    free(ponteiro_vetor);

    return 0;
}