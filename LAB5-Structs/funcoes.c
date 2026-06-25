// funcao (funcao com calculos dentro)

#include "funcoes.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h> //usar malloc


//1. implemente uma função que receba uma string e 1 char e retorna a posição do char na string ou -1 se não encontrar


//1
int busca(int valor, int *valores,int tamanho){//percorrer array valores pra ver se o valor ta no array e achar sua posicao
    for(int i = 0; i < tamanho; i++){
        if (valor == *(valores + i)){
            return i;
        }
    }
    return -1;
}

//2
float mediaPonderada(float *valores, float *pesos, int tamanho){
    float mult = 0; 
    for (int i = 0; i < tamanho; i++){
            mult += *(valores + i) * *(pesos + i);
    }
    return mult;
}

//3
int tamanho(char *string){ //recebe uma string e retorna seu tamanho
    int i;
    for(i = 0; *(string + i)!='\0' ; i++){ 
    }
    return i;
}
//ARRAY -> PONTEIRO
//string[i] -> *(strig +i)


//4
int copiaString(char *string1, char *string2){ //recebe duas strings e copia a primeira na segunda
    int len = tamanho(string1);
    for (int i = 0 ; i < len; i++){
        *(string2 + i) = *(string1 + i);
    }
    return 0;
}

//5
void input(char *imprime, char *ler){
   printf("%s \n", imprime);
   scanf("%s", ler);
}

//2.

void escreverbi( int a[], int tamanho, char *arqui){
    FILE *f = fopen(arqui,"wb");
    fwrite(a, sizeof(int), tamanho, f);
    fclose(f);
}
/*
int *lerbi( char *arqui, int tamanho){
    FILE *f = fopen(arqui, "rb");   // RODEI E NAO APARECE NADA NO TERMINAL
    int v[tamanho];
    fread(v, sizeof(int),tamanho, f);
    for(int i=0; i< tamanho; i++){
        printf("%d", v[i]);
    }
    fclose(f);
}
*/

//ou (sor)

//malloc -> aloca memoria


int *lerbi( char *arqui, int tamanho){
    int *v = malloc(sizeof(int) *tamanho);
    FILE *f = fopen(arqui, "rb");
    fread(v, sizeof(int), tamanho,f);
    fclose(f);
    return v;
}


//lab 5

             //tipo    variavel    tipo  variavel
void escreveJSON(struct lab L,           char *arquivo){

    FILE *f = fopen(arquivo,"w");  //f-> variavel que ta arquivo
    fprintf(f,"{\n");
    fprintf(f,"\" x \":%s,\n", L.tema); //pra coloca aspas dupla dentro da string, pra printa "x" tem que coloca no print " \" x \" :%d \n"
    fprintf(f,"\" x \":%f\n", L.data);
    fprintf(f,"}");
    fclose(f); //fecha arquivo
};

struct lab* leJSON(char *arquivo){
    FILE *f = fopen(arquivo,"r");
    struct lab retorno; //salva o que lemos do arquivo na variavel
    fscanf(f, "%s"); //fscanf le do arquivo (le primeira linha)
    fscanf(f, "\"x\": %s,", retorno.tema); //le segunda linha     
    fscanf(f, "\"x\": %f", &retorno.data); //le terceira linha
    fclose(f);
    return &retorno;
}

