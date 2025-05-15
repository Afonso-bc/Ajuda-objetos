#include<stdio.h> 
#include<stdlib.h>
float Y(float x)
{
 float y;

 y=(x-5)/(x+5);
 return y;
}


main()
{
      float x;
      printf("y=(x-5)/(x+5) \n");
      printf("Insira o valor de x:"); scanf("%f",&x);
      printf("Y = %.2f \n" ,Y(x));
      system("pause");
      }
