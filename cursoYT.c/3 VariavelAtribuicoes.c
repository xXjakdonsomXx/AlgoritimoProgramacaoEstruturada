#include<stdio.h>
#define texto "entrada e saida de dados"
int main(){
    printf("%s\n", texto);
 int idade = 0;
 float altura = 0.0;
 char nome[50];

printf("Quantos anos voce tem?\n");
scanf("%d", &idade);

printf("Qual é a sua altura?\n");
scanf("%f", &altura);

printf("E como voce se chama?\n\n");
scanf("%s", &nome);

printf("Entao quer dizer que...\n");
printf("voce tem %d anos.\n", idade);
printf("Voce tem %.2f metros.\n", altura);
printf("e voce se chama %s.\n", nome);
}