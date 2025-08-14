#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //Gerar número aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; //Número entre 0 e 100.

    //Início do jogo
    printf("Bem vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a compração: ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha seu número (entre 0 e 100): ");
    scanf("%d", &numeroJogador);

    switch (tipoComparacao){
        case 'M':
        case 'm':
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            printf("Você escolheu a opção maior!\n");
            break;
        case 'N':
        case 'n':
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            printf("Você escolheu a opção menor!\n");
            break;
        case 'I':
        case 'i':
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            printf("Você escolheu a opção igual!\n");
            break;
        default:
            printf("Opção de jogo inválida!\n");
            break;
    }

        //Exibir número do computador
        printf("O número do computador é: %d e o do jogador é: %d\n", numeroComputador, numeroJogador);
        
        if (resultado == 1){
            printf("Parabéns! Você venceu!\n");
        } else {
            printf("Que pena! Você perdeu!\n");
        }

}