#include <stdio.h>

int main()
{
    int multi = 1, i, primo, p, soma = 0, vet[15];

    for(i = 0; i < 15; i++){
    printf("Digite 15 numeros: elemento (%d)", i);
    scanf("%d", vet[i]);
        }
    for(i=0;i<15;i++){
        if(vet[i] % 2 == 0){
        multi = multi * vet[i];
    }}
    for(i=0;i<15;i++){
        for(p = 2; p <= vet[i] / 2; p++){
            if (vet[i] % p != 0){
                soma = soma + vet[i];
            }
        }
    }
    printf("A multiplicacao de todos os numeros par e: %d", multi);
    printf("\n");
    printf("A soma de todos os numeros primos e: %d", soma);
   
    return 0;
}
