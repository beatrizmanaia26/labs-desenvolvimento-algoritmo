//assinatura (declaração) da funcao -> nome, o que recebe e o que retorna
// Arquivo de cabeçalho -> .h

#ifndef LAB1Funcoes_H
#define LAB1Funcoes_H


//LAB3

int busca(int valor, int *valores,int tamanho); 

float mediaPonderada(float *valores, float *pesos, int tamanho);

int tamanho(char *string);

int copiaString(char *string1, char *string2);

void input(char *imprime,char *ler);

void input(char *imprime, char *ler);//uma função que funciona como a funcao input do python (recebe uma string para imprimir e retorna uma string com o que foi lido do teclado)

//2.
void escreverbi( int a[], int tamanho, char *arqui); //declara arquivo como ponteiro

//3.
int *lerbi( char *arqui, int tamanho);
 
#endif // LAB1Funcoes_H


//LAB 4

//1.Altere as funções para receber ponteiros no lugar de arrays;
//2.Uma função que escreve um array em um arquivo binário, recebendo um array, seu tamanho e o nome do arquivo;
//3.Uma função que retorna um array a partir da leitura de um arquivo binário, recebendo um nome de arquivo e um tamanho;
