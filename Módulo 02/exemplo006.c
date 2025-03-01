#include<stdio.h>
#include<locale.h>
/*Opeadores aritméticos
+ adição
- subtração
* multiplicação
/ divisão
% módulo ou resto da divisão

*/
void main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 3;
    int b = 2;
    int r = a + b; //+ opereador binário
    printf("O resultado é %i\n", r);

    int u = -b; //- operador unário
    printf("operador unário -> %d\n", u);

    int m = a * b;
     printf("Multiplicação -> %d\n", m);

    int d =  a / b; //Divisão de dois nr inteiro
    printf("Divisão inteira -> %d\n", d);

    float c = 3;
    float d2 = c / b; //Divisão real
    printf("Divisão real -> %.2f\n", d2);

    int resto = a % b;
     printf("Resto da divisão -> %d\n", resto);

    //Em C pode fazer operações aritméticas com letras
    //Tabela ASCII
    char letra = 'J';
    letra = letra + 5;
    printf("Estou com a letra %c na memória.\n", letra);
    printf("Soma entre J e 5 é igual = %d.\n", letra);
}
