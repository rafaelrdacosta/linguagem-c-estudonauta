#include<stdio.h> //Diretiva de pr�-processamento para incluir a biblioteca standard input/output
#include<locale.h> //Especifica constante de acordo com a localiza��o espec�fica - moeda, data...
//Resolu��o Rafael Costa
void main(){
    setlocale(LC_ALL, "Portuguese"); //Fun��o para localizar o programa; LC_ALL constante que indica a zona
    printf("Oi");
    printf("\nOi,\ntudo \nbem?"); //\n significa new, ou seja, nova linha
    /*
    \n nova linha
    \t tabulu��o
    \b backspace
    \r retorno para in�cio da linha atual e imprime
    \\ imprime barra \
    \" imprime a "
    \? imprime interroga��o
    \a emiss�o de um beep
    %% imprime porcentagem
    */

    printf("\nOi,\ttudo\tbem?");
    printf("\nOi,t\budo\tbem?");
    printf("\nOi, tudo\rbem?");
    printf("\n \\ \n \" \n \? \n %%");
    printf("\a");

    printf("C � \n \"SUPER\" \n F�cil!");

}
