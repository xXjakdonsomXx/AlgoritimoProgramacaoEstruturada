#include<stdio.h>

int main(){

    int a;
    printf("Digite um numero menor do que 10:\n");
    scanf("%d", &a);

    for(a; a<=10; a++){
        printf("%d ", a);
        if(a == 8){
        break;
        }
    }
}