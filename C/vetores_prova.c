#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Insira o tamanho dos vetores 1 e 2: ");
    scanf("%d", &n);

    int i, escalar, vet1[n], vet2[n];
       

    for(i = 0; i < n; i++)
    {
        printf("Insira os numeros do vetor 1, elemento [%d]: ", i);
        scanf("%d", &vet1[i]);
    }
    for(i = 0; i < n; i++)
    {
        printf("Insira os numeros do vetor 2, elemento [%d]: ", i);
        scanf("%d", &vet2[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nnumero dos vetores 1 [%d] e 2 [%d]", vet1[i], vet2[i]);
    }

    for (i = 0; i < n; i++)
    {
        escalar += vet1[i] * vet2[i];
    }

    printf("\nA multiplicacao escalar dos dois vetores eh: %d", escalar);

    return 0;
}