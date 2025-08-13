#include <stdio.h>

int main(){
    int dia;

    printf("Entre o valor do dia!\n");
    scanf("%d", &dia);

    switch (dia){
        
        case 1:
        printf("domingo\n");
        break;
        case 2:
        printf("segunda\n");
        break;
        case 3:
        printf("terça\n");
        break;
        case 4:
        printf("quarta\n");
        break;
        case 5:
        printf("quinta\n");
        break;
        case 6:
        printf("sexta\n");
        break;
        case 7:
        printf("sábado\n");
        break;
        default:
        printf("Opção inválida!\n");
    }


}