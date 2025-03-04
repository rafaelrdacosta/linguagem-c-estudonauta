#include<stdio.h>
#include<locale.h>
#include<time.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    time_t t; //variável para receber a data atual do tipo time_t
    time(&t); //ativação da variável t
    struct tm *data; //Criação da estrutura tm e uma variável (data) apontando (*) para essa estrutura
    data = localtime(&t); //atribuindo a variáel data o localtime com parâmetro a variável t
    int d = data->tm_mday; //criação de uma variável inteira para receber o dia do mês
    int m = data->tm_mon + 1;   //criação de uma variável inteira para receber o mês do ano - no sistema a contagem do mês começa com zero
    int a = data->tm_year + 1900; //na biblioteca o ano começa em 1900

    printf("Estamos no dia %i, mês %i, ano de %d.", d, m, a);

}
