#include<stdio.h>

int main(){
    float m;
    printf("Digite sua nota: \n");
    scanf("%f", &m);

    if(m >= 7.0){
        printf("Aprovado!");
    } 
    else{
        printf("reprovado!");
    }
}