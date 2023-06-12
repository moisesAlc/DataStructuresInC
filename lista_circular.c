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

    terceiro->proximo = primeiro;

    // percorrendo do início ao fim
    struct No* atual = primeiro;
    do{
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }
    while (atual != primeiro);

    free(primeiro);
    free(segundo);
    free(terceiro);

    return 0;
}