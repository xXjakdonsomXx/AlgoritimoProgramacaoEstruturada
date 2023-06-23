#include<stdio.h>

int main() {

    int inteiro1, endereco;
    float float1, float2;
    double double1;
    char char1, char2;

printf("digite um numero inteiro:\n");
scanf("%d", &inteiro1);

printf("Digite um numero real e depois outro com algumas casas decimais: \n");
scanf("%f %f", &float1, &float2);

printf("Digite a inicial do seu nome:\n");
scanf("%c", &char1);

printf("Agora digite seu nome:\n");
scanf("%s", &char2);

printf("Numero inteiro: %d\n", &inteiro1);
printf("Numeros reais:\n%f\n%.3f\n", &float1, &float2);
printf("letra: %c\n", &char1);
printf("String: %s\n", &char2);
}