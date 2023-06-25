#include<stdio.h>

int main(){
    int a = -1;
    while(a <= 0 || a > 1000){
        printf("Digite o numero de sua vaga:\n");
        scanf("%d", &a);
    if(a <= 0 || a > 1000){
        printf("Vaga invalida, digite outra.\n");
    }
    else{
        printf("vaga valida!");
        }
    }
}