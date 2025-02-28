#include<stdio.h>
#include<stdlib.h>  //Para usar a função rand
#include<time.h>    //Pra usar a função time
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //Para iniciar a função rand
    int n = rand() % 50 + 1; //Gera um número entre 0 e 50
    printf("Eu gerei o número (%d)", n);
}
