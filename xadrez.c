#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre, bispo = 1, rainha = 1;
    int casasbispo = 5, casastorre = 5, casasrainha = 8;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf ("MOVIMENTO BISPO\n");
    while (bispo <= casasbispo){
        printf("Cima Direita\n");
        bispo++;
    }
        printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf ("MOVIMENTO TORRE\n");
    for (torre = 1; torre <= casastorre; torre++)
    {
        printf("Direita\n");
    }
        printf("\n");
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("MOVIMENTO RAINHA\n");
    do {
        printf("ESQUERDA\n");
        rainha++;
    } while (rainha <= casasrainha);
    
            printf("\n");
    
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
     printf("MOVIMENTO DO CAVALO\n");
    int movimentovertical = 2;
    int movimentohorizontal = 1;
    for (int v = 1; v <= movimentovertical; v++){
        printf("Cima\n");
        for (int h = 1; h <= movimentohorizontal; h++){
            if (v == movimentohorizontal){
                printf("Direita\n");
            }
        }
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
