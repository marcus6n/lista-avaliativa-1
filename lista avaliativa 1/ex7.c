#include <stdio.h>

int main()
{
    int n, i, t1 = 0, t2 = 1, proximo;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("O termo de ordem zero da sequência de Fibonacci é: 0\n");
    }
    else if (n == 1)
    {
        printf("O primeiro termo da sequência de Fibonacci é: 1\n");
    }
    else
    {
        for (i = 2; i <= n; i++)
        {
            proximo = t1 + t2;
            t1 = t2;
            t2 = proximo;
        }

        printf("O termo de ordem %d da sequência de Fibonacci é: %d\n", n, t2);
    }

    return 0;
}
