#include <stdio.h>

int main () {

    int nota;

    printf("*** Chegou a hora da nota final ***\n");
    printf("Digite sua nota: \n");
    scanf("%d", &nota);

    if (nota >= 70){
        printf("Parabéns! Vc foi aprovado!\n");
    } else if (nota >= 60){
        printf("Vc fará a prova novamente!\n");
    } else if (nota >= 50){
        printf("Vc está em recuperação!\n");
    } else {
        printf("Vc foi reprovado!\n");
    }

}