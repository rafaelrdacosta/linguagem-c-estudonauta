#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    /*Atribuição composta
    x = x + 3; --> x += 3;
    k = k * 4; --> k *= 4;
    j = j / 2; --> j /= 2;
    m = m % 5; --> m %= 5;
    */

    int a = 6;

    a += 2;
    printf("a = %d.\n", a);
    //a agora está valendo 8
    a -= 2;
    printf("a = %d.\n", a);
    //a agora está valendo 6
    a *= 3;
    printf("a = %d.\n", a);
    //a agora está valendo 18
    a /= 2;
    printf("a = %d.\n", a);
    //a agora está valendo 9

}
