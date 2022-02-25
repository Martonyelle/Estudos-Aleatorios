#include <stdio.h>
#include <stdlib.h>

int mmc(int num1, int num2)
{

    int mmc, aux, i;

    for (i = 2; i <= num2; i++)
    {
        aux = num1 * i;

        if ((aux % num2) == 0)
        {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}

int recursiva(int x)
{
    int resultado;

    if(x == 0)
        resultado = 1;
    else
    {
        resultado = mmc(1, x) / recursiva(x) / mmc(1, x);
    }
    return resultado;

}


int main()
{
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    fflush(stdin);

    resultado = recursiva(n);


    printf("Resultado: %d", resultado);



    return 0;
}
