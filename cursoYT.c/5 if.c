#include<stdio.h>

int main(){
    float m;

    printf("Digite a nota que voce tirou para analizarmos se vc esta aprovado ou nao: \n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("aprovado, parabens!\n");
    }
    
} 