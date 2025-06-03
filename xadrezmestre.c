#include <stdio.h>

// Função recursiva para mover a Torre 
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para mover o Bispo na diagonal (Cima-Direita)
void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima e Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

// Função com loops aninhados para o movimento do Bispo
void moverBispoLoops(int casas) {
    for (int i = 0; i < casas; i++) { // Movimento vertical
        for (int j = 0; j < 1; j++) { // Movimento horizontal (1 por vez)
            printf("Cima e Direita (Loop)\n");
        }
    }
}

// Função recursiva para mover a Rainha (Cima)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Cima\n");
        moverRainha(casas - 1);
    }
}

// Movimento do Cavalo com loops aninhados (2 cima + 1 direita)
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
        }
        printf(" Fim de movimento em L \n\n");
    }
}

int main() {
    int casasTorre = 3;
    int casasBispo = 3;
    int casasRainha = 3;
    int movimentosCavalo = 2;

    printf("Movimento da TORRE:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do BISPO (Recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\nMovimento do BISPO (Loops Aninhados):\n");
    moverBispoLoops(casasBispo);

    printf("\nMovimento da RAINHA:\n");
    moverRainha(casasRainha);

    printf("\nMovimento do CAVALO:\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
