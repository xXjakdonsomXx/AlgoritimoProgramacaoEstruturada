#include<stdio.h>

int main(){
    int d;

    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &d);

    switch (d){
    case 1:
        printf("domingo \n");
        break;
    case 2:
        printf("segunda-feira \n");
        break;
    case 3:
        printf("terça-feira \n");
        break;
    case 4:
        printf("quarta-feira \n");
        break;
    case 5:
        printf("quinta-feira \n");
        break;
    case 6:
        printf("sexta-feira \n");
        break;
    case 7:
        printf("sábado \n");
        break;
    default:
    printf("isso nao e um dia da semana, burro \n");
        break;
    }
}