#include<stdio.h>
#include<locale.h>
#include<stdlib.h>  //Para utilizar o comando system com o pause, com a finalidade de clicar no arquivo execut�vel no windons explorer ele permanecer aberto
void main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Ol�, Mundo!\n");
    system("pause");
}
