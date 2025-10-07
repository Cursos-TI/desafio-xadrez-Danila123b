#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Implementação de Movimentação do Bispo//
    int bispo = 5;
    int i = 1;

    printf("Movimentos do bispo\n");
    while (i <= bispo){
        printf("Para cima, Para direita %d \n", i);
        i++;
    }
    printf("\n");

     // Implementação de Movimentação da Torre//
     int torre = 5 ;

    printf("Movimentos da torre\n");
    for (int i = 1; i <= torre; i++){
        printf("Direita %d\n", i);
    }
    printf("\n");

    // Implementação de Movimentação da Rainha//
    int rainha = 8;
    int R = 1;

    printf("Movimentos da rainha\n");
    do{
        printf("Esqueda %d\n", R);
        R++;
    } while (R <= rainha);

    printf("\n Movimentações nivel novato concluidas\n");
    printf("\n\n");
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
