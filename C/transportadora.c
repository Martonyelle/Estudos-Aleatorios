#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <conio.h>

int main()
{
    float preco,produto, seguro = 0, frete = 0, imposto = 0;
    char cargaP[1], transporte[1], paisO[1];

    printf("Digite o valor unitario: ");
    scanf("%f", &preco);
    if (preco < 0){
        printf("Valor digitado incorreto encerrando o programa.\n");
        return 1;
    }
    if (preco <= 1000)
    {
        imposto = preco * 0.10;
        produto = preco + imposto;
    }
    else
    {
        imposto = preco * 0.15;
        produto = preco + imposto;
    }
    fflush(stdin); // para limpar a entrada enter do teclado

    printf("Agora digite o pais de origem: \n Estados Unidos = E \n Mexico = M \n Outros = O \n");
    paisO[0] = getchar();
    fflush(stdin);
        while(paisO[0] != 'E' && paisO[0] != 'M' && paisO[0] != 'O'){
             printf("Incorreto, tente novamento com o digito certo desta vez: ");
             paisO[0] = getchar();
             fflush(stdin);
        }
    printf("\n");
    printf("A carga e perigosa ? \n Sim = S \n Nao = N \n");
    cargaP[0] = getchar();
    fflush(stdin);
        while(cargaP[0] != 'S' && cargaP[0] != 'N'){
             printf("Incorreto, tente novamento com o digito certo desta vez: ");
             cargaP[0] = getchar();
             fflush(stdin);
        }
    printf("\n");
    printf("Qual o meio de transporte ? \n Terrestre = T \n Fluvial = F \n Aereo = A \n");
    transporte[0] = getchar();
    fflush(stdin);
        while(transporte[0] != 'T' && transporte[0] != 'F' && transporte[0] != 'A'){
             printf("Incorreto, tente novamento com o digito certo desta vez: ");
             transporte[0] = getchar();
             fflush(stdin);
        }

    if(transporte[0] == 'A' && paisO[0] == 'M')
        {
            seguro = preco / 2;
        }

    printf("\n");

    if(paisO[0] == 'E' && cargaP[0] == 'S'){
        frete = 60;
    }
    else if (paisO[0] == 'E' && cargaP[0] == 'N')
    {
        frete = 22;
    }
    else if (paisO[0] == 'M' && cargaP[0] == 'S')
    {
        frete = 31;
    }
    else if (paisO[0] == 'M' && cargaP[0] == 'N')
    {
        frete = 31;
    }
    else if (paisO[0] == 'O' && cargaP[0] == 'S')
    {
        frete = 34;
    }
    else
    {
        frete = 70;
    }
    produto += frete;
    produto += seguro;

    printf("Valor do imposto: %.2f\n", imposto);
    printf("Valor do frete: %.2f\n", frete);
    printf("Valor do Seguro: %.2f \n", seguro);
    printf("Valor final do produto: %.2f\n", produto);


    return 0;
}