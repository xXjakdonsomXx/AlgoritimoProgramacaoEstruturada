#include<stdio.h>
#include<string.h>
#include<locale.h>
#define N 50

int main(){
    setlocale(LC_ALL,"Portuguese");

    char senha[N];
    char senhaUser[N];
    int ok;

    printf("Crie uma senha:\n");
    gets(senha);

    printf("Agora digite a sua senha novamente:\n");
    gets(senhaUser);

    ok = strcmp(senha, senhaUser);

    if(ok == 0)
        printf("senha valida!\n");
    else
        printf("senha invalida!\n");
}