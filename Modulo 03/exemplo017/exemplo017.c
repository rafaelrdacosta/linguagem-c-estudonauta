#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t; //vari�vel para receber a data atual do tipo time_t
    time(&t); //ativa��o da vari�vel t
    struct tm *data; //Cria��o da estrutura tm e uma vari�vel (data) apontando (*) para essa estrutura
    data = localtime(&t); //atribuindo a vari�el data o localtime com par�metro a vari�vel t
    int d = data->tm_mday; //cria��o de uma vari�vel inteira para receber o dia do m�s
    int m = data->tm_mon + 1;   //cria��o de uma vari�vel inteira para receber o m�s do ano - no sistema a contagem do m�s come�a com zero
    int a = data->tm_year + 1900; //na biblioteca o ano come�a em 1900

    printf("Estamos no dia %i, m�s %i, ano de %d.", d, m, a);

}
