#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 100

int main()
{
    int vet[max], j, i, cont = 0;

    srand(time(NULL));
    //Comando para utilizar o relogio do computador como base de numeros para geração aleatoria de numeros.

    for (i = 0; i < max; i++)
    {
        vet[i] = rand() % 100;
        // Comando para numeros aleatorios.
        
    }
    
    for (i = 0; i < max; i++)
    {
        for(j = i + 1; j < max; j++)
        {
            if (vet[i] == vet[j])
                cont++;
        }    
    }
    
    for(i = 0; i < max; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\nTotal de numeros repetidos: %d", cont);

    return 0;
}