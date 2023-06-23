#include <stdio.h>

int main() {
    int soma = 0;
    int i;
    
    for (i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }
    
    printf("A soma dos numeros abaixo de 1000 que sao multiplos de 3 ou 5 e: %d", soma);
    
    return 0;