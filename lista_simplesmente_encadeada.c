#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* proximo;
};

int main()
{
    struct No* primeiro = (struct No*)malloc(sizeof(struct No));
    struct No* segundo = (struct No*)malloc(sizeof(struct No));
    struct No* terceiro = (struct No*)malloc(sizeof(struct No));

    primeiro->valor = 1;
    segundo->valor = 2;
    terceiro->valor = 3;

    primeiro->proximo = segundo;
    segundo->proximo = terceiro;
    terceiro->proximo = NULL;

    struct No* atual = primeiro;

    while (atual != NULL){
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }

    free(primeiro);
    free(segundo);
    free(terceiro);

    return 0;
}