#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float catA, catB, hipotenusa = 0, soma = 0;

    printf("Digite o primeiro cateto: ");
    scanf("%f", &catA);
    while (catA < 0)
    {
        printf("Valor incorreto, apenas numeros positivos, informe o primeiro cateto: ");
        scanf("%f", &catA);
    }

    printf("\nDigite o segundo cateto: ");
    scanf("%f", &catB);
    while (catB < 0)
    {
        printf("Valor incorreto, apenas numeros positivos, informe o segundo cateto: ");
        scanf("%f", &catB);
    }

    hipotenusa = sqrt(catA*catA + catB*catB);
    soma = catA + catB;
    
    if(soma > hipotenusa)
        printf("\nO valor da hipotenusa eh: %.2f", hipotenusa);
    else
    {
        printf("Valores inconsistentes.");
    }

    
    return 0;
}