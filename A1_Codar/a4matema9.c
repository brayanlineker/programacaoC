#include <stdio.h>

int main(){

    int idade, dependente;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua renda: ");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: ");
    scanf("%d", &dependente);

    // A primeira condição idade do usuário está entre 18 e 65 anos.
    // A segunda condição se a renda do usuário é menor que 3000.
    // A terceira condição verifica se o número de dependentes é maior que 2.

    if (idade >= 18 && idade < 65){
        if (renda < 3000){
             if ( dependente > 2){
                printf("Vc atende a todos os critérios!\n");
            } else {
                printf("O número de dependentes está fora da regra.\n");
            }
        } else {
            printf("Sua renda não está em conformidade!\n");
            }
    } else {
        printf("Sua idade não está em conformidade!\n");
    }



}