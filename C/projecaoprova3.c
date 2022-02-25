#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int escalar = 0, *p1, *p2, norma, i, tam;

    printf("Digite o tamanho dos vetores v e w: ");
    scanf("%d", &tam);
    while (tam > 100)
    {
        printf("Erro. Tamanho nao aceito tente novamente: ");
        scanf("%d", &tam);
    }

    int v[tam], w[tam];
    float projecao[tam];

    for(i = 0; i < tam; i++)
    {
        printf("Digite o numero que deseja para o vetor v na posicao[%d]: ", i);
        scanf("%d", &v[i]);
    }

    for(i = 0; i < tam; i++)
    {
        printf("Digite o numero que deseja para o vetor w na posicao[%d]: ", i);
        scanf("%d", &w[i]);
    }



    p1 = malloc(tam * sizeof(int));

    if(p1)
    {  
        p1 = v;
    }
    else
    {
        printf("Erro. Memoria Insuficiente");
    }

    p2 = malloc(tam * sizeof(int));

    if(p2)
    {
        p2 = w;
    }
    else
    {
        printf("Erro. Memoria Insuficiente");
    }

    for(i = 0; i < tam; i++)
    {
        escalar += v[i] * w[i];
    }

    for(i = 0; i < tam; i++)
    {
        norma += sqrt(w[i] * w[i]);
    }

    for(i = 0; i < tam; i++)
    {
        projecao[i] = ((float)escalar / norma * *(p2 + i));
    }

    printf("A projeçao escalar dos vetores v e w eh de:");
    printf("(");

    for(i = 0; i < tam; i++)
    {
        printf("%.1f,", projecao[i]);
    }

    printf(")");
    return 0;
}