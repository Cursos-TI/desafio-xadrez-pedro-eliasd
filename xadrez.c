#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoBispo(int n){
    if (n > 0){
        printf("Cima\n");
        printf("Direita\n");
        movimentoBispo(n - 1);
    }
}

void movimentoTorre(int n){
    if (n > 0) {
        printf("Direita\n");
        movimentoTorre(n -1);
    }
}

void movimentoRainha(int n){
    if (n > 0){
        printf("Esquerda\n");
        movimentoRainha(n - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo com Função Recursiva:\n");
    /*int i = 1;

    while (i <= 5){
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }*/
    
    movimentoBispo(5);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação da Torre com Função Recursiva:\n");
    /*i = 1;

    do{
        printf("Direita\n");
        i++;
    }while (i <= 5);*/

    movimentoTorre(5);
    printf("\n");

  
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha usando Função Recursiva:\n");
    /*for(int i = 1; i <= 8; i++){
        printf("Esquerda\n");
    }*/
    movimentoRainha(8);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo usando Loops aninhados\n");
    for (int h = 1; h > 0; h--){
        int v = 1;
        while (v <= 2){
            printf("Baixo\n");
            v++;
        }
        printf("Esquerda\n");
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimentação do cavalo com loops complexos:\n");
    for (int v = 1, h = 1; v <= 2; v++){
        while (h <=2){
            printf("Cima\n");
            h++;
        }
        if (v < 2) continue;
        printf("Direita\n");

    }

    printf("Movimentação do Bispo com Loop Aninhado:\n");

    for(int v = 1; v <= 5; v++){
        for(int h = 1; h > 0; h--){
            printf("Cima\n");
        }
        printf("Direita\n");
    }

    return 0;
}
