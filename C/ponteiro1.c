#include <stdio.h>

int main()
{
    int v1 = 10, v2 = 20, *p1, *p2;

    p1 = &v1;
    p2 = &v2;

    printf("O conteudo da variavel p1 eh: %p\n", p1);
    printf("O conteudo da variavel p2 eh: %p\n", p2);

    if(p1 > p2)
        printf("O maior endereco eh: %p", p1);
    else
        printf("O maior enedeco eh: %p", p2); 


    return 0;
}