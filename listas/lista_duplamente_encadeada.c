#include <stdio.h>
#include <stdlib.h>

struct No {
    int valor;
    struct No* anterior;
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

    primeiro->anterior = NULL;
    primeiro->proximo = segundo;

    segundo->anterior = primeiro;
    segundo->proximo = terceiro;

    terceiro->anterior = segundo;
    terceiro->proximo = NULL;

    // percorrendo do início ao fim
    struct No* atual = primeiro;
    while (atual != NULL){
        printf("%d -> ", atual->valor);
        atual = atual->proximo;
    }

    // percorrendo do fim ao início
    struct No* ultimo = terceiro;
    while (ultimo != NULL){
        printf("%d -> ", ultimo->valor);
        ultimo = ultimo->anterior;
    }

    free(primeiro);
    free(segundo);
    free(terceiro);

    return 0;
}