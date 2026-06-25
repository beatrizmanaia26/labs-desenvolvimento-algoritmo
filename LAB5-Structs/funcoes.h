//assinatura (declaração) da funcao -> nome, o que recebe e o que retorna
// Arquivo de cabeçalho -> .h


#ifndef LAB1Funcoes_H
#define LAB1Funcoes_H


//LAB4 modificacao do 3

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


//LAB 5

//1.Uma função que recebe um strunct definido por você e salva seus dados no formato JSON
//2.Uma função que lê um arquivo JSON e retorna um struct funcao do struct pro json
//FAZER        3.As mesmas funções armazenando e lendo de arquivos binários  funcao do json pro struct

struct lab{    //define antes
    char tema[20];
    float data;
};

void escreveJSON(struct lab, char *arquivo); //usa o que definiu como parametro da funcao
struct lab* leJSON(char *arquivo);
//tp q retorna

void escreveJSONbi(struct lab, char *arquivo); 
struct lab* leJSONbi(char *arquivo);


//  FAZER  3.