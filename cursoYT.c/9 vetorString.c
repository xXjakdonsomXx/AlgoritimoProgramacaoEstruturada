#include<stdio.h>

int main(){
    char s[10];

    printf("digite uma palavra:\n");
    scanf("%s", s);  //scanf convencional
    fflush(stdin);
    printf("Resultado: %s\n", s);

    printf("digite seu nome completo: \n");
    scanf("%30[^\n]s", s);  //scanf aprimorado
    fflush(stdin);
    printf("resultado: %s\n\n", s);
}