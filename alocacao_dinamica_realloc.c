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

    printf("Entre %d elementos:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &ponteiro_vetor[i]);
    }

    printf("Os elementos do vetor sao: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", ponteiro_vetor[i]);
    }
    printf("\n");

    // Implementando a realocação:

    int novo_tamanho;
    printf("Entre o novo tamanho do vetor: ");
    scanf("%d", &novo_tamanho);

    ponteiro_vetor = (int *)realloc(ponteiro_vetor, novo_tamanho * sizeof(int));

    if (ponteiro_vetor == NULL) {
        printf("Falha na alocacao de memoria\n");
        return 1;
    }

    printf("Entre %d elementos adicionais:\n", novo_tamanho - tamanho);
    for (int i = tamanho; i < novo_tamanho; i++) {
        scanf("%d", &ponteiro_vetor[i]);
    }

    printf("Os elementos atualizados do vetor sao: ");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", ponteiro_vetor[i]);
    }
    printf("\n");

    free(ponteiro_vetor);

    return 0;
}