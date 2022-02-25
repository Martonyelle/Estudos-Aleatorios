#include <stdio.h> 

int main()
{
    float atual, anterior, porcent;

    printf("Digite seu peso atual: ");
    scanf("%f", &atual);
    printf("Agora digite seu peso anterior: ");
    scanf("%f", &anterior);

    anterior = anterior/100;
    atual = atual-atual*anterior;

    if (atual>=25)
    {
        printf("engordou muito cuidado!");
        return 1;
    }
    else if (atual<=-20)
    {
        printf("emagreceu muito cuidado!");
        return 1;
    }
    
    printf("Tudo Certo!");
    

    return 0;
}