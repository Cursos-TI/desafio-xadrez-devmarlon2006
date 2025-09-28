#include <stdio.h>

void mover_bispo(int casas);

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int casas_bispo = 7; // O Bispo pode se mover até 7 casas em diagonal
    const int casas_torre = 7; // A Torre pode se mover até 7 casas na horizontal ou vertical
    const int casas_rainha = 7; // A Rainha pode se mover até 7 casas em qualquer direção (horizontal, vertical, diagonal)
    const int casas_cavalo = 2; // O Cavalo se move em "L", 2 casas em uma direção e 1 na perpendicular

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 1; i <= casas_bispo; i++) {
        printf("Bispo pode se mover %d casas em diagonal.\n", i);
    }
    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (int i = 1; i <= casas_torre; i++) {
        printf("Torre pode se mover %d casas para a direita.\n", i);
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (int i = 1; i <= casas_rainha; i++) {
        printf("Rainha pode se mover %d casas para a esquerda.\n", i);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for (int i = 1; i <= casas_cavalo; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cavalo pode se mover %d casas em L.\n", i);
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    mover_bispo(casas_bispo);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    mover_bispo(casas_bispo);
    for (int i = 1; i <= casas_cavalo; i++) {
        for (int j = 1; j <= 1; j++) {
            if (i == 2) {
                printf("Cavalo pode se mover %d casas em L.\n", i);
                break; // Sai do loop interno após a primeira movimentação
            }
            continue; // Continua para a próxima iteração
        }
    }

    printf("Digite qualquer caracter: ");
    scanf("%*c"); // Mantém a janela aberta para visualização dos resultados

    return 0;
}

// Função recursiva para movimentação do Bispo
void mover_bispo(int casas) {
        if (casas > 0) {
            printf("Bispo pode se mover %d casas em diagonal.\n", casas);
            mover_bispo(casas - 1);
        }
    }
