#include<stdio.h>
#include<stdlib.h>

void troca()
{
     int A,B,aux;
     printf("Insira um numero inteiro para a variavel A: ");
     scanf("%d" ,&A);
     printf("Insira um numero inteiro para a variavel B: ");
     scanf("%d",&B);
     aux=A;
     A=B;
     B=aux;
     printf("\n==Depois da troca de valores==\n");
     printf("O valor da variavel A: %d\n", A);
     printf("O valor da variavel B: %d\n", B);
     }
     main()
     {
           Troca();
           getch;
           }
           system("cls"); //clear screen
