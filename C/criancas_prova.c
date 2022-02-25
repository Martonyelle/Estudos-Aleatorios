#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, periodo;

    printf("Digite a quantidade de criancas que nasceram durante os ultimos meses: ");
    scanf("%d", &n);
    printf("\nDigite o periodo de tempo a ser avaliado: ");
    scanf("%d", &periodo);
    fflush(stdin);

    int i, tempo[n];
    char sexo[n];
    float contmorte = 0, contM = 0, contF = 0, morteM, morteF, morte36;
    //Floats dividos por inteiros, costuma a bugar e aparecer um resultado que não corresponde, prestar atenção.


    for(i = 0; i < n; i++)
    {
        printf("Qual o sexo da crianca[%d] responda com M ou F: ", i);
        sexo[i] = getchar();
        fflush(stdin);
            while (sexo[i] != 'M' && sexo[i] != 'F')
            {
                printf("Erro. Digite o correto M ou F por favor: ");
                sexo[i] = getchar();
                fflush(stdin);
            }

        printf("Tempo em que ela permaneceu viva: ");
        scanf("%d", &tempo[i]);
            if(sexo[i] == 'M' && tempo[i] <= periodo)
                        contM = contM + 1;
                            if(sexo[i] == 'F' && tempo[i] <= periodo)
                            {
                                contF = contF + 1;
                            }

                if(tempo[i] <= 36)
                {
                    contmorte = contmorte + 1;
                }
        fflush(stdin);
    }


    morte36 = contmorte / n * 100;
    morteM = contM / n * 100;
    morteF = contF / n * 100;

    for (i = 0; i < n; i++)
    {
        printf("\nO sexo eh [%c] e o tempo vivo foi de [%d]", sexo[i], tempo[i]);
    }

    printf("\n\nA porcentagem de criancas mortas do sexo masculino durante o periodo foi de: %.2f%%\n", morteM);
    printf("\nA porcentagem de criancas mortas do sexo feminino durante o periodo foi de: %.2f%%\n", morteF);
    printf("\nA porcentagem de criancas que viveram 36 meses ou menos neste periodo foi de: %.2f%%\n", morte36);

    return 0;
}