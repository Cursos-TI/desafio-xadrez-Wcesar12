#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para mover o Bispo na diagonal cima direita
void moverBispo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Movimento do Bispo com loops aninhados (externo vertical, interno horizontal)
void moverBispoComLoops(int casasVerticais, int casasHorizontais) {
    printf("\nMovimento do Bispo com Loops Aninhados:\n");
    for (int i = 0; i < casasVerticais; i++) {
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Diagonal Cima Direita\n");
            break;
        }
    }
}

// Movimento do Cavalo: 2 casas para cima e 1 para direita usando loops aninhados
void moverCavalo() {
    int movimentosVerticais = 2;  
    int movimentosHorizontais = 1; 

    printf("\nMovimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    for (int i = 0; i < movimentosVerticais; i++) {
        if (i == 1) {
            printf("Cima (com impulso!)\n");
        } else {
            printf("Cima\n");
        }
    }

    int j = 0;
    while (j < movimentosHorizontais) {
        printf("Direita\n");
        j++;
    }
}

int main() {
    // Torre
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(casasTorre);

    printf("\n");

    // Bispo recursivo
    int casasBispo = 4;
    printf("Movimento do Bispo (4 casas na Diagonal Cima Direita):\n");
    moverBispo(casasBispo);

    printf("\n");

    // Rainha
    int casasRainha = 6;
    printf("Movimento da Rainha (6 casas para a Esquerda):\n");
    moverRainha(casasRainha);

    printf("\n");

    // Cavalo
    moverCavalo();

    // Bispo com loops aninhados
    moverBispoComLoops(3, 1); // 3 movimentos diagonais

    return 0;
}
