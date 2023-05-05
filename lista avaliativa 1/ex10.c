#include <stdio.h>

int main()
{
    int i, n, soma = 0;
    float media;

    printf("Digite 10 números inteiros:\n");

    for (i = 1; i <= 10; ++i)
    {
        printf("Digite o %dº número: ", i);
        scanf("%d", &n);
        soma += n;
    }

    media = (float)soma / 10;
    printf("A média dos números digitados é: %.2f", media);

    return 0;
}
