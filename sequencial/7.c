#include <stdio.h>

int main() {
    int n, fib1 = 0, fib2 = 1, fibn, i;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0) {
        fibn = fib1;
    } else if (n == 1) {
        fibn = fib2;
    } else {
        for (i = 2; i <= n; i++) {
            fibn = fib1 + fib2;
            fib1 = fib2;
            fib2 = fibn;
        }
    }

    printf("O %d-esimo termo da sequencia de Fibonacci eh: %d\n", n, fibn);

    return 0;
}