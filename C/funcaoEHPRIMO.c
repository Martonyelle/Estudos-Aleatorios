#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPrimo(int n) // Função perfeita para saber se o numero é primo, curta e super funcional, estude a logica por trás.
{

    if (n < 5 || n % 2 == 0 || n % 3 == 0)
        return (n == 2 || n == 3);

    int maxP = sqrt(n) + 2;
    for (int p = 5; p < maxP; p += 6)
        if (n % p == 0 || n % (p + 2) == 0)
            return false;

    return true;
}

int main()
{
    int n1[15], soma = 0, i, cont = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Digite um numero: elemento [%d] ", i);
        scanf("%d", &n1[i]);

        if (ehPrimo(n1[i]))
        {
            cont = cont + 1;
            soma = soma + n1[i];
        }
    }

    for (i = 0; i < 15; i++)
    {
        printf(" %d ", n1[i]);
    }

    printf("\n\n");
    printf("A quantida de numeros primos eh: %d e a soma de todos eles eh de: %d", cont, soma);

    return 0;
}