#include <stdio.h>

int main() {
    // Movimento da Torre
    int Torre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < Torre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo
    int Bispo = 5;
    int i = 0; 
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (i < Bispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Movimento da Rainha
    int Rainha = 8;
    i = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < Rainha);

    return 0;
}
