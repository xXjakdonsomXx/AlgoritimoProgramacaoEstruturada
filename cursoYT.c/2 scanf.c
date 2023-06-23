#include<stdio.h>

int main(){

    int idade = 0;
    float peso = 0.0;

    printf("Quando voce nasceu, voce tinha %d anos.\n", idade);

    printf("E hoje em dia voce tem quantos anos?\n");
    scanf("%d", &idade);

    printf("E a ultima vez que vc se pesou, quantos quilos vc tinha?\n");
    scanf("%f", &peso);

    printf("ok, entao hoje em dia vc tem %d anos e %.2f quilos.\n", idade, peso);
}

// %d - int
// %X (x maiusculo) - hexadecimal
// %f - float
// %e - varias casas decimais
// %c - uma letra
// %s - texto