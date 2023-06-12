#include<stdio.h>
#include<stdlib.h>

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Elementos da matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    // implementar função de soma
    
    
    // implementando função de multiplicação

    int matrizl[2][2] = {{1, 2}, {3, 4}}; 
    int matriz2[2][2] = {{9, 6}, {7, 8}}; 
    int matrizProduto[2][2];
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        matrizProduto[i][j] = matrizl[i][0] * matriz2[0][j] + matrizl[i][1] * matriz2[i][j];
            
    printf("Matriz produto:\n"); 
        for (int i = 0; i < 2; i++) 
            for (int j = 0; j < 2; j++) 
                printf("%d ", matrizProduto[i][j]); 
            printf("\n"); 

    return 0;
}
