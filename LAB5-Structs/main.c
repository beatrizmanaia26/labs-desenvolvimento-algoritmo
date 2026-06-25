#include <stdio.h>
#include "funcoes.h"

int main(){

//lab 3
    //ex1
int va = 5;
int v[6] ={1, 3, 5, 8, 10, 12};
printf("a posicao do valor e %d\n", busca(va, v, 6));

    //ex2
float array1[] = {0 , 1 , 2};
float array2[] = {6, 4 , 2};
printf("media ponderada e: %.2f \n", mediaPonderada(array1,array2, 3));

    //ex3
char palavra[9] = "tristeza";
printf("tamanho da palavra e: %d \n", tamanho(palavra));

    //ex4

char string1[5] = "amem";
char string2[5] = "";
copiaString(string1, string2);
printf("%s \n", string2);

    //ex5

char texto[20]="";
input("entre com o texto:\n ", texto);
printf("%s \n", texto);

//2.
 // abre o arquivo para escrita
FILE *f = fopen("arqui","wb"); //escreve binario  // RODEI E ABRIU UM ARQUIVO CHAMADO "arquivo" e nele tava falando "the file is not displayed in the text editor..."
int be[]={1,2,3};
fwrite(be,sizeof(int), 3, f);
fclose(f);

//ou (sor)

//2. 
int ve[] = {1,2,3};
int tamanho = 3;
char arqui[]="palavra";
escreverbi(ve,tamanho,arqui);
//3.

int *v2 = lerbi(arqui, tamanho);
for(int i = 0; i < tamanho; i++){
    printf("%d", v2[i]);
}

//lab 5

struct lab L; //variavel do tipo struct lab

printf("Tema do lab:");
scanf("%s", &L.tema);
printf("Data do lab:");
scanf("%f", &L.data);

escreveJSON(L,"arqu.JSON"); //L vem incluso as variaveis tema e data

struct lab *L2;
L2 = leJSON("arqu.JSON");
printf("%s %f \n", L2->tema, L2->data);
}






