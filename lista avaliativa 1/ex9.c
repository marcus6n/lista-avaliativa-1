#include <stdio.h>

int main()
{
    int opcao, quantidade;
    float total = 0.0;
    char continuar;

    do
    {
        printf("Menu de frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("Escolha a fruta desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite a quantidade de abacaxis desejada: ");
            scanf("%d", &quantidade);
            total += quantidade * 5.0;
            break;
        case 2:
            printf("Digite a quantidade de maçãs desejada: ");
            scanf("%d", &quantidade);
            total += quantidade * 1.0;
            break;
        case 3:
            printf("Digite a quantidade de peras desejada: ");
            scanf("%d", &quantidade);
            total += quantidade * 4.0;
            break;
        default:
            printf("Opção inválida.\n");
        }

        printf("Deseja continuar comprando? (s/n) ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Total da compra: R$%.2f\n", total);

    return 0;
}
