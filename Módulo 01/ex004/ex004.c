/*
   Programa: Cadastro de Pessoas
   Resolu��o: Rafael Costa
   Descri��o: Este programa cadastra nome, sexo e nota de 3 pessoas e exibe os dados formatados.
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    char nome[3][40]; // Array de strings para armazenar 3 nomes
    char sexo[3];     // Array para armazenar os sexos
    float notas[3];   // Array para armazenar as notas
    //Cabe�alho do programa
    printf("===== CADASTRO DE PESSOAS =====\n");
    //Entrada de dados pelo usu�rio
    for(int i=0; i<3; i++){
        printf("Cadastrando a %d� pessoa: \n", i+1);
        printf("-------------------------------\n");
        //Cadastro do nome
        while(1){
            printf("Nome: ");
            scanf(" %39[^\n]", nome[i]); // L� nome com espa�os e limita a 29 caracteres
            if (strlen(nome[i]) >= 3){      //strlen - devolve o nr de caracteres na string sem o "\0"
                break;
            } else{
                printf("<<ERRO>> Nome inv�lido! Tente novamente.\n");
            }
        }
         // Cadastro do sexo
        while(1){
            printf("SEXO[M/F]: ");
            fflush(stdin);
            scanf("%c", &sexo[i]);
            if(sexo[i] == 'm' || sexo[i] == 'M' || sexo[i] == 'f' || sexo[i] == 'F'){
                break;
            } else{
                printf("<<ERRO>> Sexo Inv�lido! Digite [M/F].\n");
            }
        }
        // Cadastro da nota
        printf("NOTA: ");
        scanf("%f", &notas[i]);
    }
    //Exibi��o dos resultados
    printf("Listagem completa\n");
    printf("-------------------------------\n");
    printf("%-20s %s %4s\n", "NOME", "SEXO", "NOTA"); //%-22s - alinhamento das strings com base a esquerda
    for(int i=0; i<3; i++){
        printf("%-20s %c %7.1f\n", nome[i], sexo[i], notas[i]);
    }
    printf("-------------------------------\n");

}
