#include<stdio.h>
#include<stdlib.h>  //Para usar a fun��o rand
#include<time.h>    //Pra usar a fun��o time
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //Para iniciar a fun��o rand
    int n = rand() % 50 + 1; //Gera um n�mero entre 0 e 50
    printf("Eu gerei o n�mero (%d)", n);
}
