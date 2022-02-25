#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade[15], i, satisfacao, cont = 0, otimo = 0, soma = 0;
    float media = 0, porcent, bom = 0;

        for(i = 0; i < 15; i++)
        {
            printf("Ola espectador, para pesquisa de satisfacao precisamos que digite sua idade: ", i);
            scanf("%d", &idade[i]);
            printf("\nAgora nos diga o que achou do filme. \n3 para otimo, 2 para bom e 1 para regular: ");
            scanf("%d", &satisfacao);
            
            while (satisfacao != 3 && satisfacao != 2 && satisfacao != 1)
            {
                printf("Numero incorreto, tente novamente, digite 3 para otimo, 2 para bom e 1 para regular: \n");
                scanf("%d", &satisfacao);
            }
            printf("\n");

            if(satisfacao == 1)
            {
                cont++;
                soma += idade[i];
            }
            
            else if(satisfacao == 2)
                bom += 1;
            

            else if(satisfacao == 3)
                otimo += 1;
        }

    media = ((float)soma / cont);
    porcent = bom / 15.00 * 100.00;

    printf("A idade media das pessoas que opinaram regular foi: %.2f", media);
    printf("\nA quantidade de pessoas que responderam otimo foi de: %d", otimo);
    printf("\nA porcentagem de pessoas que responderam bom dentre todos os espectadores eh: %.2f%%", porcent);

    return 0;
}