/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>
#include<string.h>


void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("========= Qual � o seu ESTADO? =========\n");

    //Declara��o de vari�veis
    char estado [3]; // Espa�o para duas letras + caractere nulo

    //Entrada de dados com valida��o
    while(1){
        printf("Em que estado do Brasil voc� nasceu? ");
        scanf("%2s", estado); // Limita a entrada a 2 caracteres

        strupr(estado);
        if (strlen(estado) == 2 && isalpha(estado[0]) && isalpha(estado[1])) {
            break; //isalpha - verdade caso estado[i] seja letra do alfabeto
        } else {
            printf("<< ERRO >> Estado inv�lido! Digite novamente.\n");
        }

    }

    //Exibi��o dos resultados
    if (strcmp(estado, "AC") == 0){
        printf("Nascendo no %s, voc� � Acreano.\n", estado);
    } else if (strcmp(estado, "AL") == 0){
        printf("Nascendo em %s, voc� � Alagoano.\n", estado);
    } else if (strcmp(estado, "AP") == 0){
        printf("Nascendo no %s, voc� � Amapaense.\n", estado);
    } else if (strcmp(estado, "AM") == 0){
        printf("Nascendo no %s, voc� � Amazonense.\n", estado);
    } else if (strcmp(estado, "BA") == 0){
        printf("Nascendo na %s, voc� � Baiano.\n", estado);
    } else if (strcmp(estado, "CE") == 0){
        printf("Nascendo no %s, voc� � Cearense.\n", estado);
    } else if (strcmp(estado, "DF") == 0){
        printf("Nascendo no %s, voc� � Bralisiense.\n", estado);
    } else if (strcmp(estado, "ES") == 0){
        printf("Nascendo no %s, voc� � Capixaba.\n", estado);
    } else if (strcmp(estado, "GO") == 0){
        printf("Nascendo em %s, voc� � Goiano.\n", estado);
    } else {
        printf("Nascendo em(no) %s voc� � natural dessa\ncidade, mas ainda n�o sei como te chamar!\n", estado);
    }
    printf("========================================\n");
}


