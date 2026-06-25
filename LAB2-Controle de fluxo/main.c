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

//LAB 2

float xmax, ymax; //ex.1
float xmin, ymin;  //ex.2
int xs; //ex.3
int valor, limite; //ex.4

//ex 1
printf("Digite um valor para x: ");
scanf("%f",&xmax);
printf("Digite um valor para y: ");
scanf("%f",&ymax);
if (xmax == ymax){
    printf("Os valores são iguais e valem: %.2f", max_float(xmax, ymax));
}
else{
    printf("O maior valor entre x e y e: %.2f \n",max_float(xmax, ymax));
}

//ex2
printf("Digite um valor para x: ");
scanf("%f",&xmin);
printf("Digite um valor para y: ");
scanf("%f",&ymin);
if (xmax == ymax){
    printf("Os valores são iguais e valem: %.2f", min_float(xmin, ymin));
}
else{
    printf("O menor valor entre x e y e: %.2f \n",min_float(xmin, ymin));
}

//ex3
printf("Digite um valor para x: ");
scanf("%d",&xs);
if(sinal(xs)==0){
    printf("o valor e 0");
}
else if(sinal(xs)<0){
    printf("o valor e negativo");
}
else if(sinal(xs)>0){
    printf("o valor e positivo");
}


//ex4 
printf("Digite um valor para valor: ");
scanf("%d",&valor);
printf("Digite um valor para limite: ");
scanf("%d",&limite);
if(acima_de(valor, limite)==1){
    printf("o valor esta acima do limite");
}
else{
    printf("o valor esta abaixo do limite");
}
}

//roda -> clica no + para adicionar outro terminal-> gcc *.c -o nome.exe-> enter -> ./nome.exe -> enter



