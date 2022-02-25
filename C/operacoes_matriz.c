#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0, i, j;
    float somaimpar = 0, somapar = 0, media = 0, mat[4][4];

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("Digite o numero do elemento[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
   
   for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(j%2 == 0)
            {
                somapar += mat[i][j];
                cont = cont + 1;
            }
            else
            {
                somaimpar += mat[i][j];
            }
        }        
    }

    media = somapar / cont;

    printf("Matriz digitada:");
    printf("\n");

    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%2.f ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\n\nA soma dos valores da coluna impar eh: %.2f", somaimpar);
    printf("\nA media dos valores da coluna par eh: %.2f\n", media);
    

    return 0;
}
/*programa incompleto lembre-se de revisar a logica, somaimpar está dando erro, e conferir a media também.*/