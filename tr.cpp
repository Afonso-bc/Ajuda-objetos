#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.141592

 float R;           //vari�vel global
 

void AREA()             //procedimento
{
     float A;           //vari�vel local
     
     
     A = pi*pow(R,2);
     printf("\n O valor da area do circulo e' %.2f\n\n", A);
}




float PERIM()           //fun��o definida pelo utilizador
{
      float P;           //vari�vel local
      
      
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
