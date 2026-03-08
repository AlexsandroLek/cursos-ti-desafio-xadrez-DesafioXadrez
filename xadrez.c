#include <stdio.h>

#define TAM 8

int main() {

    int torre, bispo = 1, rainha = 1;
    int casasbispo = 5, casastorre = 5, casasrainha = 8;

    // =============================
    // MOVIMENTO DO BISPO
    // =============================

    printf("MOVIMENTO BISPO\n");

    while (bispo <= casasbispo){
        printf("Cima Direita\n");
        bispo++;
    }

    printf("\n");

    // =============================
    // MOVIMENTO DA TORRE
    // =============================

    printf("MOVIMENTO TORRE\n");

    for (torre = 1; torre <= casastorre; torre++){
        printf("Direita\n");
    }

    printf("\n");

    // =============================
    // MOVIMENTO DA RAINHA
    // =============================

    printf("MOVIMENTO RAINHA\n");

    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= casasrainha);

    printf("\n");

    // =============================
    // MOVIMENTO DO CAVALO
    // =============================

    printf("MOVIMENTO DO CAVALO\n");

    int movimentovertical = 2;
    int movimentohorizontal = 1;

    for (int v = 1; v <= movimentovertical; v++){

        printf("Cima\n");

        for (int h = 1; h <= movimentohorizontal; h++){

            if (v == movimentovertical){
                printf("Direita\n");
            }

        }
    }

    printf("\n");

    // =============================
    // TABULEIRO 8x8 (NÍVEL MESTRE)
    // =============================

    int tabuleiro[TAM][TAM];

    int linha = 0;
    int coluna = 0;

    int movimento = 5;

    printf("MOVIMENTO DA TORRE NO TABULEIRO\n");

    for (int i = 1; i <= movimento; i++){

        coluna++;

        printf("Movimento %d -> posição (%d,%d)\n", i, linha, coluna);

        if (coluna >= TAM){
            printf("Limite do Tabuleiro\n");
            break;
        }
    }

    return 0;
}