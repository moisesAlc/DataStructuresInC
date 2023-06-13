#include<stdio.h>
#include<stdlib.h>
#include<string.h> // necessário para a função strcpy

struct RegistroPessoa {
    char nome[50];
    int idade;
    float altura;
};

int main(){

    struct RegistroPessoa pessoa_maria;

    // envia a string "Maria" para pessoa.nome
    // precisa incluir o <string.h>
    strcpy(pessoa_maria.nome, "Maria"); 
    pessoa_maria.idade = 25;
    pessoa_maria.altura = 1.75;

    // %s para strings
    printf("Nome: %s\n", pessoa_maria.nome);
    printf("Idade: %d\n", pessoa_maria.idade);

    // %f para floats, %.2f para duas casas demais de precisão
    printf("Altura: %.2f\n", pessoa_maria.altura);

    //--------------------------
    printf("----------------------------\n");

    struct RegistroPessoa pessoa_joana = {"Joana", 25, 1.72};

    printf("Nome: %s\n", pessoa_joana.nome);
    printf("Idade: %d\n", pessoa_joana.idade);
    printf("Altura: %.2f\n", pessoa_joana.altura);

    return 0;

}
