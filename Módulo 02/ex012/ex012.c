/*Resolu��o Rafael Costa*/

#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    //Cabe�alho do programa
    printf("===== SITUA��O DO ALUNO =====\n");

    //Declara��o de vari�veis
    float n1, n2, media;

    //Entrada de dados pelo usu�rio
    while(1){
        printf("Primeira nota: ");
        scanf("%f", &n1);
        //Verifica��o se a nota � v�lida
        if(n1>=0 && n1<=10){
            break;
        } else{
            printf("<<ERRO>> Nota inv�lida! Digite novamente.\n");
        }
    }
    while(1){
        printf("Segunda nota: ");
        scanf("%f", &n2);
        //Verifica��o se a nota � v�lida
        if(n2>=0 && n2<=10){
            break;
        } else{
            printf("<<ERRO>> Nota inv�lida! Digite novamente.\n");
        }
    }
    //C�lculo da media
    media = (n1 + n2)/2;

    //Exibi��o do resultado
    printf("Com as notas %.1f e %.1f,\n", n1, n2);
    printf("a m�dia do aluno foi %.1f.\n", media);
    printf("O aluno est� %s!\n", (media>=7)?"APROVADO":"REPROVADO");
    printf("=============================\n");

}
