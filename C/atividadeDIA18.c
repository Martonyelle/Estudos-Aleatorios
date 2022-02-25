#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float anguloBase, distanciaBase, anguloAltura, altura, hipotenusa;

    printf("Digite o angulo formado: ");
    scanf("%f", &anguloBase);
        if(anguloBase < 0);
        {
            printf("Nao e permitido valores negativos repita: ");
            scanf("%f", &anguloBase);
        }
    printf("Agora Digite a distancia para a parede: ");
    scanf("%f", &distanciaBase);
        if(distanciaBase < 0);
        {
            printf("Nao e permitido valores negativos repita: ");
            scanf("%f", &distanciaBase);
        }

    hipotenusa = distanciaBase / cos(anguloBase);
        if(hipotenusa < 0);
        {
            hipotenusa = hipotenusa * (-1);
        }

    altura = sqrt(pow(hipotenusa, 2)-pow(distanciaBase, 2));
    anguloAltura = 180 - (90 + anguloBase);
        if (altura + distanciaBase < hipotenusa)
        {
            printf("Error, soma de dois lados menor que o terceiro.");
            return 1;
        }


    printf("\nA medida da escada e de %.2f \n", hipotenusa);
    printf("A altura da escada e de %.2f \n", altura);
    printf("Os angulos são: 90, %.2f, %.2f graus. \n\n", anguloBase, anguloAltura);

    return 0;
}
