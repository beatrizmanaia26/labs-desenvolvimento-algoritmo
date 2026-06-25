#include <stdio.h>
#include <stdlib.h> // biblioteca que esta o qsort
#include "ponteiro.h"

int main(){
/*
 typedef (*funcao)();
 funcao f = minha_funcao; //f recebe endereco da funcao que descrevi em cima
 f();  //  olha endereco da funcao chamamos a funcao pelo endereço dela (f) é do tipo ponteiro de funcao (nao recebe e nao retorna nada)

 typedef int (*def)(int, int); //definiu tipo chamado def que aponta pra funcao que recebe 2 inteiros e retorna um inteiro (qualquer funcao desse jeito podemos chamar por *def)
 def fs[] = {soma, subtracao, divisao, multiplicacao};
 int len = 4;
 int res[len];
 int x = 1;
 int y = 2;
 for(int i=0;i<len;i++)
 res[i] = fs[i](x, y); //ta iterando (pelas 4 funcoes na ordem que a gnt as definiu) no vetor de funcoes e chamando cada uma delas com os parametros x e y
 for(int i=0;i<len;i++)
 printf("%d ", res[i]);
*/
int tamanho = 10;
int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
exibeArray(array, tamanho);
qsort(array, tamanho, sizeof(int), comparaInteiros);
exibeArray(array, tamanho);
}

/*
           Ponteiro de função
Podemos usar para escolher qual função será executada
Pode facilitar o uso de if...else if...else e switch
Apesar de parecido não é o mesmo conceito de first class citzen de outras linguagens,
como Python

             void
O tipo void em C é usado para descrever funções e variáveis sem tipos
Para um ponteiro, isto pode ser interesssante pois se não possui um tipo específico, este
ponteiro pode apontar para qualquer tipo

ponteiro de void pode aponta pra qqr coisa ate pra inteiro (serve pra funcao mais generica)

#include <stdio.h>
int main()
{
 void *p;
 int i = 
1
;
 float f = 3.14
;
 p = &i;
 printf
("*p = %d\n", *(int *)p); //saida é int
 p = &f;
 printf
("*p = %f\n", *(float *)p);
}
*/