#include <stdio.h> 
#include <stdlib.h>

int main() 
{
    int a, b, sub = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("\n");
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    sub = a - b;

    if(sub < 0)
    printf("Este numero (%d) eh um numero negativo!", sub);
    else
    printf("Este numero (%d) eh um numero positivo!", sub);


    return 0;
}