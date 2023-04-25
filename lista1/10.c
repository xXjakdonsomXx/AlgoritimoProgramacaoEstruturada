#include <stdio.h>

int main() {
    int nums[10], sum = 0;

    printf("Digite 10 números inteiros:\n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
        sum += nums[i];
    }

    float avg = sum / 10.0;

    printf("A média dos números é: %.2f\n", avg);

    return 0;
}