#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.141592

float AreaCirc (int R )
{
      float result;
      result=pi * pow(R,2);
      return result;
 }
      
      main()
      { 
            int raio;
            
      printf("Para calcular a area de um circuito, insira o valor do raio:");
      scanf("%d",&raio);
      printf("A area do circulo e' %.2f\n", AreaCirc(raio));
      printf("\nA area do circulo com o raio igual a 2 e' %.2f\n", AreaCirc(2));
      system("pause");
      }
