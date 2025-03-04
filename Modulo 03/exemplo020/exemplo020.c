#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &num);

    switch(num){  //switch só funciona com int e char
    case 1:
         printf("Um");
         break;
    case 2:
         printf("Dois");
         break;
    case 3:
         printf("Três");
         break;
    case 4:
         printf("Quatro");
         break;
    default:
          printf("Erro!");
    }
}
