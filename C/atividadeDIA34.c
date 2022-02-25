#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, i, *pont1, *pont2, escalar = 0;

    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tam);

    pont1 = malloc(tam * sizeof(int));
    pont2 = malloc(tam * sizeof(int));

    int vet[tam], vet2[tam];

    for(i = 0; i < tam; i++)
    {
        printf("Digite um numero para o primeiro vetor na posicao [%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    printf("\n");

    for(i = 0; i < tam; i++)
    {
        printf("Digite um numero para o segundo vetor na posicao [%d]: ", i);
        scanf("%d", &vet2[i]);
    }

    if(pont1)
    {
        for(i = 0; i < tam; i++)
        {
            *(pont1 + i) = vet[i];
        }
    }
    else
    {
        printf("Erro ao alocar memoria!");
    }

    if(pont2)
    {
        for(i = 0; i < tam; i++)
        {
            *(pont2 + i) = vet2[i];
        }
    }
    else
    {
        printf("Erro ao alocar memoria!");
    }
    
    for(i = 0; i < tam; i++)
    {
        escalar += *(vet + i) * *(vet2 + i);
    }
    
    printf("O Resultado eh: %d", escalar);
  
    return 0;
}