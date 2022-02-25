#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15], aux, fim = 14, i;


    for(i = 0; i < 15; i++){
        printf("Digite um numero, elemento [%d]:  ", i);
        scanf("%d", &vet[i]);

    }
    printf("\nVetor Original: ");
    for (i = 0; i < 15; i++)
    {
        printf("%2d ", vet[i]);
    }

    for (i = 0; i < 7; i++)
    {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
    
    printf("\n");
    printf("\nVetor Modificado: ");
    for (i = 0; i < 15; i++)
    {
        printf("%2d ", vet[i]);
    }


    return 0;
}