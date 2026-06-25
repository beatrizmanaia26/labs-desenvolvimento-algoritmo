//na main executa e testa o codigo 

#include <stdio.h>
#include "funcoes.h"

int main(){

//exercicio 1

 float x=8, y=10;

 float m = media(x,y);

 printf("Valor 1: %.3f\n", x);
 printf("Valor 2: %.3f\n", y);
 printf("Media = %.3f\n", m);

//exercicio 2

double d = distancia(-4, 4,3,4);

printf("Distancia: %lf\n", d);

//exercicio 3

double alg = MediaAlgoritmo (10 , 8, 10, 7, 9);
printf("Media cc2632: %.2lf\n", alg);

float fisica = MediaFisica1 (8, 8, 9, 9, 10, 10, 7, 8, 9, 10);
printf("Media cf2111: %.2f\n", fisica);

float calculo =  MediaCalculo2 (10, 9, 9, 9, 10);
printf("Media ca2121: %.2f\n ", calculo);

float grafo = MediaGrafo (10, 9, 10);
printf("Media ca2330: %.2f\n", grafo);

float geom = MediaGeom (9, 10, 8, 10);
printf("Media ca2211: %.2f\n", geom);

float filo = MediaFilo (2, 2, 3, 2, 8, 1);
printf("Media cs2310: %.2f\n", filo);
}

//roda -> clica no + para adicionar outro terminal-> gcc *.c -o nome.exe-> enter -> ./nome.exe -> enter