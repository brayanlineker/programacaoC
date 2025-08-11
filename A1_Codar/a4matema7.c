#include <stdio.h>

int main() {

int idade = 17;
float altura = 1.75;

//idade >= 18 => Falso
//idade <= 30 => Verdadeiro
//Falso && Verdadeiro
//Falso && altura > 1.70
//Falso && Verdadeiro => Falso

if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Vc está na faixa etária e tem a altura adequada.\n");
} else {
    printf("Vc não atende aos critérios.\n");

}
}

// && será verdadeiro apenas se ambos os lados forem verdadeiros
// || será verdadeiro se pelo menos um dos lados for verdadeiro
// ! inverte o valor lógico, se for verdadeiro passa a ser falso e vice-versa
