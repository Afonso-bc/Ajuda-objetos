#include<stdio.h>
#include<stdlib.h>
main()
{   
float N, soma=0;

   do{       
   printf("insira um numero:");
   scanf("%f",&N);
   soma = soma + N; //acumulado
   printf("\n A soma atual e' %.2f \n",soma);
}while(soma <100);
      system("pause");
      }
