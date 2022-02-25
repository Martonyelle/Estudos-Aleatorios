#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tam, i, *vet, *vet2, *vet3;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int)); //Comando para alocação dinamica de memoria.

    if(vet)
    {
        for(i = 0; i < tam; i++){
            *(vet + i) = rand() % 100; //Sempre preste atenção a aritmetica de ponteiros, não se esqueça de alterar o conteúdo não o endereço.
            printf("vet: %d ", *(vet + i));}
    }
    else
    {
        printf("Erro ao alocar memoria!");
    }
    printf("\n");
    vet2 = malloc(tam * sizeof(int));

    if(vet2)
    {
        for(i = 0; i < tam; i++){
            *(vet2 + i) = rand() % 100;
            printf("vet2: %d ", *(vet2 + i));}
    }
    else
    {
        printf("Erro ao alocar memoria!");
    }
    printf("\n");
    vet3 = malloc(tam * sizeof(int));

    if(vet3)
    {
        for(i = 0; i < tam; i++)
        {
            *(vet3 + i) = *(vet + i) * *(vet2 + i);
            printf("vet3: %d ", *(vet3 + i));
        }
    }
    else
    {
        printf("Erro ao alocar memoria!");
    }


    return 0;
}