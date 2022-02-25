#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void eliminaEspacos(char string1[101], char string2[101], int i, int k){

 int len = strlen(string1);

 for (i = 0, k = 0; i < len; i++, k++){

     if (string1[k] == ' ') k++;

     string1[i] = string1[k];
//Aqui foi feito um vetor de origem e um vetor de destino, e a estrutura for com duas variaveis a i e k, com a condicional
// de que if string1 posicção[k] for igual a " "(espaço em branco) k++, e que string1 posição[i]
//recebe, o conteúdo do sting1 posição [k]
}

 string2 = string1;

 printf("\nTexto sem espacos:\n");

 printf("%s\n", string2);
 // Nessa linha string2 que é o vetor de destino recebe todo conteúdo do string1 vetor de origem e imprime na tela o resultado.

}


int main(){

 char string1[201], string2[201];

 int i, k;

 printf("Informe um texto:\n");

 fgets(string1, sizeof(string1), stdin);
//O operador sizeof indica o tamanho, em bytes, do tipo da variável. Esse operador permite que você evite especificar
//tamanhos de dados dependentes do computador em seus programas.
 eliminaEspacos(string1, string2, i, k);
 // Nessa linha temos a função em ação no codigo.

return 0;

}