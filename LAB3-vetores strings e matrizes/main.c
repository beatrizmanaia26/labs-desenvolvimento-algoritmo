#include <stdio.h>
#include "funcoes.h"

int main(){

    //ex1


    //ex2
    float array1[] = {0 , 1 , 2};
    float array2[] = {6, 4 , 2};
    printf("%.2f \n", mediaPonderada(array1,array2, 3));

    //ex3
    char palavra[9] = "tristeza";
    printf("%d \n", tamanho(palavra));

    //ex4

    char string1[5] = "amem";
    char string2[5] = "";
    copiaString(string1, string2);
    printf("%s", string2);

    //ex5

    char texto[20]="";
    input("entre com o texto: ", texto);
    printf("%s", texto);
}
