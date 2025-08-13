#include <stdio.h>

int main() {

    int variavel;

    printf("Digite um valor: ");
    scanf("%d", &variavel);

    switch(variavel){
    case 1: //Se for "char, %c" precisa colocar aspas simples.
        printf("Código a ser executado se variavel == 1!\n");
    break;
    case 2:
        printf("Código a ser executado se a variavel == 2!\n");
    break;
    default:
        printf("Código a ser executado a variavel não for 1 ou 2!\n");
    
    }
    }
