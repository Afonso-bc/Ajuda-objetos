#include<stdio.h>
#include<stdlib.h>
main()
{
      int N, cont, contpares=0, contimpares=0,somapares=0, somaimpares=0;
      for(cont=1 ; cont <=8; cont++)
      {
      printf("insira um numero inteiro: ");
      scanf("%d",&N);
      if(N%2==0)
      {
      contpares++;
      somapares = somapares + N;
      }
      else
      {
      contimpares++;
      somaimpares = somaimpares + N;
      }
      }
      
      printf("houve %d numeros pares e %d numeros impares\n",contpares , contimpares);
      getch();
      }
