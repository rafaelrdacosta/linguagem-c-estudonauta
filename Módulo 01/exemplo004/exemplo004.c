#include<stdio.h>
#include<locale.h>

/*Usando constantes
    -> Declaração de constantes - normalmente feito somente com letras maiúsculas;
    #define MAI 21;
    ou
    const int MAI = 21;
    -> Diferenças #define x const
    #define é uma diretiva de pré-processamento (não é um comando);
        tem que ser definido antes da função main;
    const é uma palavra reservado C (é um comando precisa de ";");
        pode ser declarado antes do main ou dentro do main;
    Com #define, o valor é substituído antes da compilação - não ocupa espaço em memória
    Com const, a constante existe na memória
    Com const é possível indicar o tipo primitivo da constante
*/
#define TOTAL 22
void main(){
    printf("%d", TOTAL);
}
