#include<stdio.h>
#include<string.h>>
#include<locale.h>
#define N 20

int main(){
    setlocale(LC_ALL, "portuguese");

    char origem[N] = {"teste testando"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("depois do strcpy:\n");
    puts(origem);
    puts(destino);
}