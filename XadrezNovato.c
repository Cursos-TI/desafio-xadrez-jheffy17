#include <stdio.h>

int main() {

    // ========================
    // MOVIMENTO DA RAINHA
    // ========================

    int i = 1; //variavel
    printf("Movimento da Rainha:\n\n");
    do {
        printf("Casa %d: Rainha se move para a Esquerda.\n", i); //saida de dados
        i++;  //repetição i+ 1.
    } while (i <= 8);  // Rainha anda 8 casas para a esquerda
    printf("\n");


    // ========================
    // MOVIMENTO DO BISPO
    // ========================

    i = 1; //
    printf("Movimento do Bispo:\n\n");
    while (i <= 5) {  // Bispo anda 5 casas na diagonal
        printf("Casa %d: Bispo se move na Diagonal (Cima + Direita).\n", i);
        i++;
    }
    printf("\n");

    // ========================
    // MOVIMENTO DA TORRE
    // ========================

    printf("Movimento da Torre:\n\n");
    for (i = 1; i <= 5; i++)  //o loop continua enquanto I foi < (menor) ou igual a 5.
    {  
        printf("Casa %d: Torre se move para a Direita.\n", i);
    }

    return 0;
}