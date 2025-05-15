#include<stdio.h>
#include<stdlib.h>
main()
{   
float N, soma=0;
int contador=0;


   do{       
   printf("insira um numero:");
   scanf("%f",&N);
   soma = soma + N; //acumulado
   printf("\n A soma atual e' %.2f \n",soma);
   
   if ( N>20)
       contador++;
       
   }while(soma <100);

   printf("\n Houve ao todo %d numeros maiores que 20\n" , contador);
system("pause");
}
