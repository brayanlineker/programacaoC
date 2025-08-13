#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao;
    int numerosecreto, palpite;

    printf("menu principal\n");
    printf("1. iniciar jogo\n");
    printf("2. ver regras\n");
    printf("3. sair\n");
    printf("escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        srand(time(0));
        numerosecreto = rand() %10;
        printf("digite um numero de 0 a 9: ");
        scanf("%d", &palpite);
        if (numerosecreto == palpite){
            printf("vc acertou!\n");
            printf("número secreto %d\n", numerosecreto);
        } else {
            printf("vc errou!\n");
            printf("número secreto %d\n", numerosecreto);
        }
    break;
    case 2:
        printf("adivinhar o número que o computador pensou!\n");
    break;
    case 3:
        printf("saindo...\n");
    break;
    default:
        printf("opção inválida!\n");

    }

}