#include<stdio.h>
#include<locale.h>

/*Usando constantes
    -> Declara��o de constantes - normalmente feito somente com letras mai�sculas;
    #define MAI 21;
    ou
    const int MAI = 21;
    -> Diferen�as #define x const
    #define � uma diretiva de pr�-processamento (n�o � um comando);
        tem que ser definido antes da fun��o main;
    const � uma palavra reservado C (� um comando precisa de ";");
        pode ser declarado antes do main ou dentro do main;
    Com #define, o valor � substitu�do antes da compila��o - n�o ocupa espa�o em mem�ria
    Com const, a constante existe na mem�ria
    Com const � poss�vel indicar o tipo primitivo da constante
*/
#define TOTAL 22
void main(){
    printf("%d", TOTAL);
}
