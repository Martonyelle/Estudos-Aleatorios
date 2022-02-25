#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void percorrer(int vet[tam])
{
    int i;

    for(i = 0; i < tam; i++)
        vet[i] = rand() % 100;
}*/

int main()
{
    int v1[10], v2[10], v3[10], i;

    srand(time(NULL));

    for(i = 0; i < 10; i++)
        v1[i] = rand() % 10;

    for(i = 0; i < 10; i++)
        v2[i] = rand() % 10;

    for(i = 0; i < 10; i++)
        v3[i] = v1[i] + v2[i];

    for(i = 0; i < 10; i++)
        printf("v1:%d v2:%d v3:%d", v1, v2, v3);




    return 0;
}
