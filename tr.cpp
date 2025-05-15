#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.141592

 float R;           //variável global
 

void AREA()             //procedimento
{
     float A;           //variável local
     
     
     A = pi*pow(R,2);
     printf("\n O valor da area do circulo e' %.2f\n\n", A);
}




float PERIM()           //função definida pelo utilizador
{
      float P;           //variável local
      
      
      P = 2*pi*R;
      return P;
}




main()
{
   
   
   printf("Insira o valor do raio do circulo: ");
   scanf("%f",&R);
   
   AREA();
  
   printf(" O valor do perimetro do circulo e' %.2f \n\n", PERIM() );
   getch();
}
