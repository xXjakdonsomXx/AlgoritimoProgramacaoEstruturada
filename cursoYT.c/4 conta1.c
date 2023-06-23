#include<stdio.h>

int main(){
    int A, B, soma, sub, divs, mult;

    printf("Digite um numero: \n");
    scanf("%d", &A);

    printf("Agora digite um numero menor do que o digitado anteriormente: \n\n");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    divs = A / B;
    mult = A * B;

    printf("De acordo com os numeros digitados pelo usuario, aqui estao umas contas bascias com esses numeros: \n");
    printf("soma: %d\n", soma);
    printf("subtracao: %d\n", sub);
    printf("multiplicacao: %d\n", mult);
    printf("divisao: %d\n", divs);

}