#include <stdio.h>
#include <stdlib.h> //Sortear números.
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0)); //Inicia o gerador de números aleatórios.

    printf("*** jokenpo ***\n");
    printf("escolha uma opcao:\n");
    printf("1. pedra\n");
    printf("2. papel\n");
    printf("3. tesoura\n");
    printf("escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador){
    case 1:
    printf("jogador: pedra - ");
    break;
    case 2:
    printf("jogador: papel - ");
    break;
    case 3:
    printf("jogador: tesoura - ");
    break;
    default:
    printf("opção inválida!\n");
    }

    switch (escolhaComputador){
    case 1:
    printf("computador: pedra\n");
    break;
    case 2:
    printf("computador: papel\n");
    break;
    case 3:
    printf("computador: tesoura\n");
    break;
    }

    if (escolhaComputador == escolhaJogador){
        printf("### jogo empatou! ###\n");
    
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3)||
                (escolhaJogador == 2) && (escolhaComputador == 1)||
                (escolhaJogador == 3) && (escolhaComputador == 2)){
        printf("### parabéns vc ganhou! ####\n");
    } else {
        printf("### vc perdeu! ###\n");
    }
}