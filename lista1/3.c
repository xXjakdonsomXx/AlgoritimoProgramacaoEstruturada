#include <stdio.h>
#define PI 3.14159

int main() {
    double raio, area, volume;
    
    scanf("%lf", &raio);
    
    area = 4 * PI * raio * raio;
    
    volume = (4.0/3) * PI * raio * raio * raio;
    
    printf("Area da superficie da esfera: %.4lf\n", area);
    printf("Volume da esfera: %.4lf\n", volume);
    
    return 0;
}

// não entendi esse prof, olhei no chat gpt mas continuo sem entender...