#include <stdio.h>

int main()
{
    int numero, maior, menor;

    // leitura do primeiro número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // inicialização das variáveis maior e menor
    maior = numero;
    menor = numero;

    // leitura dos demais números e atualização das variáveis maior e menor
    while (numero >= 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
        printf("Digite outro número inteiro (ou negativo para sair): ");
        scanf("%d", &numero);
    }

    // exibição do resultado
    printf("O maior número lido foi: %d\n", maior);
    printf("O menor número lido foi: %d\n", menor);

    return 0;
}
