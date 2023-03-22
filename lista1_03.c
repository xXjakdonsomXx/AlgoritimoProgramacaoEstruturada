#include<stdio.h>

int main(){

    int numeroInteiro;
    float numeroRealFloat;
    double numeroRealDouble;
    char letra;
    char string[100];

    scanf("%d", &numeroInteiro);
    scanf("%f", &numeroRealFloat);
    scanf("%lf", &numeroRealDouble);
    scanf("%c", &letra);
    scanf("%s", &string);

    gets(string);
    fgets(string, 100, stdin);

    printf("%3d: inteiro: %d\n", numeroInteiro);
    printf("float: %.3f\n", numeroRealFloat);
    printf("double: %.1lf\n", numeroRealDouble);
    printf("char: %c\n", letra);
    printf("string: %s\n", string);
    printf("endereco do Inteiro %x", &numeroInteiro);

}