/*
   Programa: Cadastro de Pessoas
   Resolu��o: Rafael Costa
   Descri��o: Este programa cadastra nome, sexo e nota de 3 pessoas e exibe os dados formatados.
*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    //Declara��o de vari�veis
    char nome[3][40]; // Array de strings para armazenar 3 nomes
    char sexo[3];     // Array para armazenar os sexos
    float notas[3];   // Array para armazenar as notas
    //Cabe�alho do programa
    printf("====== CADASTRO DE PESSOAS ======\n");
    //Entrada de dados pelo usu�rio
    for(int i=0; i<3; i++){
        printf("Cadastrando a %d� pessoa: \n", i+1);
        printf("---------------------------------\n");
        //Cadastro do nome
        printf("Nome: ");
        scanf(" %39[^\n]", nome[i]); // L� nome com espa�os e limita a 29 caracteres
        printf("SEXO[M/F]: ");
        fflush(stdin);
        scanf("%c", &sexo[i]);
        printf("NOTA: ");
        scanf("%f", &notas[i]);
    }
    //Exibi��o dos resultados
    printf("Listagem completa\n");
    printf("---------------------------------\n");
    printf("%-22s%-7s%-4s\n", "NOME", "SEXO", "NOTA"); //%-22s - alinhamento das strings com base a esquerda
    for(int i=0; i<3; i++){
        printf("%-22s %-6c %-4.1f\n", nome[i], sexo[i], notas[i]);
    }
    printf("---------------------------------\n");
}
