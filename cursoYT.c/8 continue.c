#include<stdio.h>

int main(){

    int a;
    printf("Digite um numero menor do que 8: \n");
    scanf("%d", &a);

    for(a; a<=20; a++){
        if(a == 10)
        {
            continue;
        }
        if(a == 15){
            continue;
        }
        
    printf("%d ", a);
    }
}