#include <stdio.h>
#include <stdlib.h>



int recursiva(float x)
{

    if(x > 1)
        return 1 / x + recursiva(x - 1,i);
    else
    {
        return 0;
    }

}


int main()
{   
    float x, resultado;
    x = 5;

    resultado = recursiva(x, y);

    printf("%.2f", resultado);
    
    return 0;
}