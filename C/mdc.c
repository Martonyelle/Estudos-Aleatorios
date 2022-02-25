#include <stdio.h>
#include <stdlib.h>

int mdc(int num1, int num2)
{
    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main()
{
    int n1, n2, calc;

    printf("Digite dois numeros que deseja calcular: ");
    scanf("%d %d", &n1, &n2);

    calc = mdc(n1, n2);

    printf("O MDC entre %d e %d eh de: %d", n1, n2, calc);

    return 0;
}