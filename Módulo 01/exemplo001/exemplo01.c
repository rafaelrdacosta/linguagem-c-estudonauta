#include<stdio.h> //Diretiva de pré-processamento para incluir a biblioteca standard input/output
#include<locale.h> //Especifica constante de acordo com a localização específica - moeda, data...
//Resolução Rafael Costa
void main(){
    setlocale(LC_ALL, "Portuguese"); //Função para localizar o programa; LC_ALL constante que indica a zona
    printf("Oi");
    printf("\nOi,\ntudo \nbem?"); //\n significa new, ou seja, nova linha
    /*
    \n nova linha
    \t tabulução
    \b backspace
    \r retorno para início da linha atual e imprime
    \\ imprime barra \
    \" imprime a "
    \? imprime interrogação
    \a emissão de um beep
    %% imprime porcentagem
    */

    printf("\nOi,\ttudo\tbem?");
    printf("\nOi,t\budo\tbem?");
    printf("\nOi, tudo\rbem?");
    printf("\n \\ \n \" \n \? \n %%");
    printf("\a");

    printf("C é \n \"SUPER\" \n Fácil!");

}
