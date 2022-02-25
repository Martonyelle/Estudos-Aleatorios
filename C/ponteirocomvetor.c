#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int vet1[5], vet2[5], somav1, somav2, i;
    int *p1, *p2;

    p1 = &somav1;
    p2 = &somav2;

    srand(time(NULL));
    
    for(i = 0; i < 5; i++)
    {
        vet1[i] = rand();
        vet2[i] = rand();
    }
    for(i = 0; i < 5; i++)
    {
        somav1 += vet1[i];
        somav2 += vet2[i];
    }
        for(i = 0; i < 5; i++)
        printf("vet1: %d\nvet2: %d\n\n", vet1[i], vet2[i]);
    
    printf("Valor da soma do vetor 1: %d\n", somav1);
    printf("Endereco de somav1: %p\n", p1);
    printf("Valor da soma do vetor 2: %d\n", somav2);
    printf("Endereco de somav2: %p\n", p2);


    return 0;
}

