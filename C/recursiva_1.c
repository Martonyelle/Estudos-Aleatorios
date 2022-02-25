#include<stdio.h>

float function(int i,int n)
{

    if(i < n)
    {
        return ((i * i + 1.0)/(5 + 3.0)) + function(i+1,n);
    }
    else
    {
        return ((i * i + 1.0)/(i + 3.0));
    }
}
int main()
{
    printf("O resultado eh: %f", function(1,5));

return 0;
}
