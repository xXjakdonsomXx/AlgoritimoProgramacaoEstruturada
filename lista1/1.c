#include <stdio.h>

int main() {
    int a, b, c, d, diferenca;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    diferenca = a * b - c * d;
    
    printf("valor de A * valor de B - valor de C * valor de D");
    printf(" valor de DIFERENCA = %d\n", diferenca);
    
    return 0;
}