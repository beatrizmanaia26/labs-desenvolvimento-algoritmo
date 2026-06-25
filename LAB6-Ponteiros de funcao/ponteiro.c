#include "ponteiro.h"
#include <stdio.h>

/*
void minha_funcao(){ //funcao que nao recebe parametro e nao retorna parametro 
 printf("chamada da minha funcao\n");
}
int soma(int x, int y){
 printf("soma\n");
 return x + y;
}
int subtracao(int x, int y){
 printf("subtracao\n");
 return x - y;
}
int divisao(int x, int y){
 printf("divisao\n");
 return x / y;
}
int multiplicacao(int x, int y){
 printf("multiplicacao\n");
 return x * y;
}
*/
void exibeArray(int array[], int tamanho){
for(int i=0; i < tamanho; i++ ){
    printf("%d ", array[i]);
    }
printf("\n");
}
int comparaInteiros(const void* a, const void* b){ //ponteiro de funcao que recebe 2 ponteiros de void e retorna um inteiro exibeArray
const int *x = (const int *)a; //como compara
const int *y = (const int *)b; //como compara
if(x > y) //como quer ordenar do maior pro menor, se x for maior que y, retorna -1, se x for menor que y, retorna 1, se forem iguais retorna 0
return -1;
else if(x < y)
return 1;
else
return 0;
}
