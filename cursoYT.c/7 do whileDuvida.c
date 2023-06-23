#include<stdio.h>

int main(){
    int a;

    printf("digite o numero 1 para iniciar o programa. \n");
    scanf("%d", &a);

    if(a == 1){
        do{
            printf("%d ", a);
            a++;
        } while(a <= 10);
    } 
    else{
        printf("digite o numero 1 para iniciar o programa.\n");
        scanf("%d", &a);
        }
    }