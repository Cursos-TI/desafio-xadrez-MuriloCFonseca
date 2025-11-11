#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação de movimentos no xadrez
    // -------------------------------
    // Peças: Torre, Bispo e Rainha
    // Estruturas de repetição: for, while e do-while
    // -------------------------------

    // -------------------------------
    // TORRE – usando FOR
    // Movimento: 5 casas para a direita
    // -------------------------------
    int i;
    int casasTorre = 5;

    printf("Movimento da TORRE:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // BISPO – usando WHILE
    // Movimento: 5 casas na diagonal superior direita
    // -------------------------------
    int casasBispo = 5;
    int j = 1;

    printf("\nMovimento do BISPO:\n");
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    // -------------------------------
    // RAINHA – usando DO-WHILE
    // Movimento: 8 casas para a esquerda
    // -------------------------------
    int casasRainha = 8;
    int k = 1;

    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}