#include<stdio.h>
#include<locale.h>
/*Opeadores aritm�ticos
+ adi��o
- subtra��o
* multiplica��o
/ divis�o
% m�dulo ou resto da divis�o

*/
void main(){
    setlocale(LC_ALL, "Portuguese");
    int a = 3;
    int b = 2;
    int r = a + b; //+ opereador bin�rio
    printf("O resultado � %i\n", r);

    int u = -b; //- operador un�rio
    printf("operador un�rio -> %d\n", u);

    int m = a * b;
     printf("Multiplica��o -> %d\n", m);

    int d =  a / b; //Divis�o de dois nr inteiro
    printf("Divis�o inteira -> %d\n", d);

    float c = 3;
    float d2 = c / b; //Divis�o real
    printf("Divis�o real -> %.2f\n", d2);

    int resto = a % b;
     printf("Resto da divis�o -> %d\n", resto);

    //Em C pode fazer opera��es aritm�ticas com letras
    //Tabela ASCII
    char letra = 'J';
    letra = letra + 5;
    printf("Estou com a letra %c na mem�ria.\n", letra);
    printf("Soma entre J e 5 � igual = %d.\n", letra);
}
