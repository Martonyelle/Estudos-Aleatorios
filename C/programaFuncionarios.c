#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float vendas;
    char nome[100];
}funcionario; //Estrutura para a criação de um tipo de dado heterogeno.

funcionario lerfunc(){
    funcionario f;
    printf("Digite o nome do funcionario: ");
    fgets(f.nome, 100, stdin);
    printf("Valor total vendido pelo funcionario: ");
    scanf("%f", &f.vendas);
    fflush(stdin);

    return f;
} //Função para leitra de dados do usuario.

void imprimirfunc(funcionario imp)
{
    printf("\n\tNome: %s", imp.nome);
    printf("\tVendas: %.2f", imp.vendas);
}//Função para impressão de dados.

int main()
{
    funcionario func[15];
    float comissao[15], porcent, maior, menor, soma = 0;
    int i, j, cont = 0, cont2 = 0;

    printf("Digite o valor para a porcentagem de comissao: ");
    scanf("%f", &porcent);
    fflush(stdin);

    porcent = porcent / 100;
 
    for(i = 0; i < 15; i++)
    {
        func[i] = lerfunc();
        soma += func[i].vendas;
    }

    for(i = 0; i < 15; i++)
    {
        comissao[i] = func[i].vendas * porcent;
    }

    
    maior = comissao[0];

    for(i = 1; i < 15; i++)
    {
        if(comissao[i] > maior)
        {
            maior = comissao[i];
            cont = i;
        }
    }
    menor = comissao[0];

    for(i = 1; i < 15; i++)
    {
        if(comissao[i] < menor)
        {
            menor = comissao[i];
            cont2 = i;
        }
    }
    
    for(i = 0; i < 15; i++)
    {
        imprimirfunc(func[i]);
        printf("\tComissao: %.2f", comissao[i]);
        printf("\n");
    }
    printf("\n\nSoma: %.2f\n", soma);

    printf("\nValor da maior comissao: %.2f do funcionario: %s", maior, func[cont].nome);
    printf("\nValor da menor comissao: %.2f do funcionario: %s", menor, func[cont2].nome);


    return 0;
}