#include<stdio.h>
int main(){
    char s[10];

    printf("digite qualquer coisa:\n");
    gets(s);
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    puts(""); // isso é para dar como se fosse um \n

    printf("Digite qualquer outra coisa: \n");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts("resultado:");
    puts(s);
}