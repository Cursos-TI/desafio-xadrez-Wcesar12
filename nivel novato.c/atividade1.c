#include <stdio.h>

int main() {
    //***Movimento da Torre*** 
    // Mover 5 casas para a Direita
    int Torre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); 
        //Imprime a direcao do movimento
    }

    printf("\n");

    // ***Movimento do Bispo***
    // Mover 5 casas para Cima Direita.
    int Bispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (i <= Bispo) {
        printf("Cima Direita\n");
        i++;
        //Iprime a direçao do movimento
    }

    printf("\n");

    //***Movimento da Rainha***
    // Se Move em todas as direções. Vamos mover 8 casas para a Esquerda.
    int Rainha = 8;
    int i = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= Rainha);

    return 0;
}