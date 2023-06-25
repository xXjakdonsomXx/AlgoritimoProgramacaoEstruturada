#include<stdio.h>

int main(){
    int a = 0;
    while (a != 1){
    printf("digite o numero 1 para iniciar o programa. \n");
    scanf("%d", &a);   
    if(a != 1){
      printf("numero invalido!\n");
    }
     }
        do{
            printf("%d ", a);
            a++;
        }
        while(a <= 10);        
    }