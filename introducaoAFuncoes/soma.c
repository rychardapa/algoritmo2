#include <stdio.h>

int soma(int n1, int n2);

void main()
{
    int n1, n2;
    printf("Digite o primeiro número a ser somado: ");
    scanf("%i", &n1);

    printf("\nAgora digite o segundo: ");
    scanf("%i", &n2);

    printf("A soma dos valores digitados é %i\n", soma(n1, n1));
}

int soma(int n1, int n2)
{
    return n1 + n2;
}