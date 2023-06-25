#include<stdio.h>
#include<string.h>
#include<locale.h>
#define N 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    char fg[N] = {"Lógica de"};
    char ab[N] = {"programação"};

    printf("antes do strcat:\n");
    printf("str1: %s\n", fg);
    printf("str2: %s\n", ab);

    strcat(fg,ab);

    printf("depois do strcat:\n");
    puts(fg);
}