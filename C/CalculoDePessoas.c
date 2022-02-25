#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, count = 0, idade[5];
    float media = 0, porcent = 0, altura[5], peso[5];
    for(i = 0; i < 5; i++)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade[i]);
        media = media + idade[i];
    }
    media = media / 5;
    for (size_t i = (0); i < 5; i++)
    {
    
    }


    for(i = 0; i < 5; i++)
    {
        printf("Digite a altura da pessoa %d: ", i);
        scanf("%f", &altura[i]);
    }


    for(i = 0; i < 5; i++)
    {
        printf("Digite o peso da pessoa %d: ", i);
        scanf("%f", &peso[i]);
    }
    
    for(i = 0; i < 5; i++){
    if (altura[i] > 1.8 && peso[i] < 80)
        count = count + 1;
    }
    for(i = 0; i < 5; i++)
    {
        if(idade[i] > 20 && idade[i] < 35 && altura[i] > 1.70)

        porcent = porcent + 1;
    }    
    porcent = porcent / 5 * 100;
    
    
    printf("\n\n");
    printf("A media da idade das pessoas: %.2f", media);
    printf("\n\n");
    printf("O numero de pessoas com altura acima de 1.80 e peso abaixo de 80kg e de: %d", count);
    printf("\n\n");
    printf("A porcentagem de pessoas com idade entre 20 e 35 anos entre as pessoas que medem mais do que 1,70m e de: %.2f%%", porcent);

    return 0;
}