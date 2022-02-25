#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matA[3][3] = {{10, 30, 50}, {5, 15, 25}, {2, 5, 9}};
    int matB[3][3] = {{5, 35, 70}, {1, 25, 30}, {1, 4, 7}};
    int matC[3][3], i, j;
    
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if(matA[i][j] > matB[i][j])
             {   matC[i][j] = matA[i][j];
             }
            else
            {
                matC[i][j] = matB[i][j];
            }
            
        }
    }
    /* Diferente do vetor a matriz precisa de dois for para percorre tanto as linhas, quanto as colunas. */
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%.2d ", matC[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}