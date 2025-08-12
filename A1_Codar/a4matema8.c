#include <stdio.h>

int main() {

    int idade;

printf("Digite sua idade: ");
    scanf("%d", &idade);

    if ( idade < 12 ) {
        printf("Vc é menor de idade!\n");
    } else if ( idade >= 12 && idade < 18) {
        printf("Vc é adolescente!\n");
    } else if ( idade >= 18 && idade < 60) {
        printf("Vc é adulto!\n");
    } else {
        printf("Vc é idoso!");
    }
    }