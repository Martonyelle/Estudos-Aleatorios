#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[15], aux, fim = 14, i;

    for(i = 0; i > 15; i++){
        printf("Digite um numero: elemento [%d]: \n", i);
        scanf("%d", &vet[i]);

    }
    printf("\n\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", vet[i]);
    }

    for (i = 0; i < 6; i++)
    {
        aux = vet[i];
        vet[i] = fim;
        fim = aux;
        fim--;
    }
    printf("\n\n");
    for (i = 0; i < 15; i++)
    {
        printf("%d ", vet[i]);
    }


    return 0;
}
