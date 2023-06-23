#include<stdio.h>

int main(){

    int dado;

    printf("digite um numero nao tao alto: \n");
    scanf("%d", &dado);

    printf("dado antes do incremento: %d\n", dado);

    dado++;
    printf("depois do incremento: %d\n", dado);

    dado--;
    printf("depois do decremento: %d\n", dado);

    dado += 5;
    printf("depois do incremento em 5 unidades: %d\n", dado);

    dado -= 6;
    printf("depois do decreento em 6 unidades: %d\n", dado);

    dado *= 20;
    printf("depois d multiplicado por 21: %d\n", dado);

}