#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Implementação de Movimentação do Bispo
    void moverbispo(int linha, int coluna){
        if (linha == 0) return;

        for (int i = 1; i <= linha; i++) {
            for (int j = 1 ; j <= coluna; j++)
            {
                printf("Prara Cima: Para Direita: %d, %d \n",i, j);
            }
            
        }
        
        moverbispo(linha -1, coluna -1);
    }
    // Implementação de Movimentação da torre
    void movertorre(int torre){
        if(torre == 0) return;
        printf("Para Direita %d\n", torre);
        movertorre(torre - 1);
    }
    // Implementação de Movimentação da rainha
    void moverrainha(int rainha){
        if(rainha == 0)return;
        printf("Para Esqueda %d\n", rainha);
        moverrainha(rainha - 1);
    }
    // Implementação de Movimentação do cavalo
    void movercavalo(){
        int movimentovertical = 2;
        int movimentohorizontal = 1;

        printf("MOVIMENTO DO CAVALO:\n");
        for (int i = 1; i <= movimentovertical; i++)
        {
            printf("Para Cima %d\n", i );
            for (int j = 1; j <= movimentohorizontal; j++)
            {
                if(i == 2 && j == 1){
                    printf("Para Direita %d\n", j);
                    break;
                }
                if(i == 1){
                    continue;
                }
            }
            
        }
        


    }




   int main(){

    //Bispo
    printf("MOVIMENTO DO BISPO\n");
    moverbispo(3, 3);
    printf("\n");
    
    //Torre
    printf("MOVIMENTO DA TORRE\n");
    movertorre(5);
    printf("\n");

    //Rainha
    printf("MOVIMENTO DA RAINHA\n");
    moverrainha(8);
    printf("\n");

    //Cavalo
    movercavalo();

    printf("\nMOVIMENTAÇÃO FINALIZADA\n");
    

    return 0;
}
