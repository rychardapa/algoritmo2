#include <stdio.h>

int dobro(int n);

main()
{
    int n = 0;
    
    printf("DIGITE UM VALOR: ");
    scanf("%i", &n);

    printf("O dobro do número digitado é %i\n", dobro(n));
}

int dobro(int n)
{
    return n + n;
}