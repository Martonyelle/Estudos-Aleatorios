#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, periodo;

    printf("Digite a quantidade de criancas que nasceram durante os ultimos meses: ");
    scanf("%d", &n);
    printf("\nDigite o periodo de tempo a ser avaliado: ");
    scanf("%d", &periodo);
    fflush(stdin);


    int i, cont = 0, contmorte = 0, contM = 0, contF = 0, tempo[n];
    char sexo[n];
    float morteM, morteF, morte36;

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
               if(sexo[i] == 'M')
                        contM += 1;
                            else
                            {
                                contF += 1;
                            }

        printf("Tempo em que ela permaneceu viva: ");
        scanf("%d", &tempo[i]);
            if(tempo[i] > periodo)
            {
               cont += 1;
            }

                if(tempo[i] <= 36)
                    contmorte += 1;
        fflush(stdin);
    }
    fflush(stdin);

    morte36 = contmorte / tempo[n] * 100;
    morteM = contM / cont * 100;
    morteF = contF / cont * 100;

    for (i = 0; i < n; i++)
    {
        printf("\nO sexo eh [%c] e o tempo vivo foi de [%d]", sexo[i], tempo[i]);
    }

    printf("\nA porcentagem de crianças mortas do sexo masculino durante o periodo foi de: [%.2f]%%", morteM);
    printf("\nA porcentagem de criancas mortas do sexo feminino durante o periodo foi de: [%.2f]%%", morteF);
    printf("\nA porcentagem de criancas que viveram 36 meses ou menos neste periodo foi de: [%.2f]", morte36);
    fflush(stdin);

    return 0;
}
