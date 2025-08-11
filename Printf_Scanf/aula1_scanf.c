#include <stdio.h>

int main(){
   int idade;
   float altura;
   char opcao;
   char nome[20];
    // sintaxe scanf
    // sanf("formato1" "formato2, $variavel, variavel2, ...");
   
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);
   
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);


   
   
   
   /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    
    %d: Imprime um valor inteiro no formato decimal.
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres. 
    
    
    */

}