#include <stdio.h>
// Desafio de Xadrez - MateCheck.
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Nível novato - Movimentação de peças.
    //Declarando as variáveis.
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

    //Movimento do Bispo utilizando a estrutura de repetição While.
    printf("Movimento do Bispo:\n");
    int b = 1;
    while (b <= Bispo) {
        printf("Cima, Direita\n");
        b++;
    }

    //Movimento da Torre utilizando a estrutura de repetição For.
    printf("Movimento da Torre:\n");
        for (int t = 1; t <= Torre; t++) {
            printf("Direita\n");
        }

    //Movimento da Rainhautilizando a estrutura de repetição Do While.
    printf("Movimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= Rainha);

    return 0;
}