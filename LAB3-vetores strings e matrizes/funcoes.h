//assinatura (declaração) da funcao -> nome, o que recebe e o que retorna
// Arquivo de cabeçalho -> .h

#ifndef LAB1Funcoes_H
#define LAB1Funcoes_H

//lab1 
//exercicio 1             
float media(float x, float y); 

//exercicio 2
double distancia (double x1, double y1, double x2, double y2);

//exercicio 3
double MediaAlgoritmo (double atv , double p1, double p2, double p3, int lab);

float MediaFisica1 (float t1, float t2, float t3, float t4, float np, float l1, float l2, float l3, float l4, float pf);

float MediaCalculo2 (float at1, float at2, float at3, float at4, float pf);

float MediaGrafo (float a1, float a2, float pf);

float MediaGeom (float a1, float a2, float a3, float pf);

float MediaFilo (float e1, float e2, float e3, float e4, float te, float f);

//LAB2

float max_float(float xmax, float ymax);

float min_float(float xmin, float ymin);

int sinal(float x);

int acima_de(float valor, float limite);

//LAB3

int busca(int valor, int valores[],int tamanho); 

float mediaPonderada(float valores[], float pesos[], int tamanho);

int tamanho(char string[]);

int copiaString(char string1[], char string2[]);

void input(char imprime[],char ler[]);

//uma função que funciona como a funcao input do python (recebe uma string para imprimir e retorna uma string com o que foi lido do teclado)

#endif // LAB1Funcoes_H