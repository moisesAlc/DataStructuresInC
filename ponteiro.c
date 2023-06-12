#include<stdio.h>
#include<stdlib.h>

void dobrarNumero(int *ponteiroNumero) {
    *ponteiroNumero = (*ponteiroNumero) * 2;
}

int main(){

    int numero = 10;
    int *ponteiro;  // Declara um ponteiro

    ponteiro = &numero;  // Passa o endereço de numero para ponteiro

    printf("Valor de numero: %d\n", numero);

    // invés de usarmos %d, usamos %p, representando um ponteiro
    printf("Endereco de numero: %p\n", &numero); 

    printf("Valor armazenado em ponteiro: %p\n", ponteiro);
    printf("Valor apontado por ponteiro: %d\n", *ponteiro);

    *ponteiro = 20;  // Atualiza o valor apontado por ponteiro

    printf("Novo valor de numero: %d\n", numero);

    // ------------------------------------------

    dobrarNumero(&numero);
    printf("%d\n", numero);

    return 0;

}
