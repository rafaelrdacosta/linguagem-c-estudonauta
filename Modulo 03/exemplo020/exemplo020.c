#include<stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um n�mero: ");
    fflush(stdin);
    scanf("%d", &num);

    switch(num){  //switch s� funciona com int e char
    case 1:
         printf("Um");
         break;
    case 2:
         printf("Dois");
         break;
    case 3:
         printf("Tr�s");
         break;
    case 4:
         printf("Quatro");
         break;
    default:
          printf("Erro!");
    }
}
