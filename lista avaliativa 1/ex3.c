#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    float raio, volume, area;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0 / 3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("A area da superficie da esfera eh: %.4f\n", area);
    printf("O volume da esfera eh: %.4f\n", volume);

    return 0;
}