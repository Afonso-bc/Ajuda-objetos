#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float x1(float a1,float b1,float det1)
{
      float res1;
      
      res1=(-b1+sqrt(det1))/(2*a1);
      return res1;
}

float x2(float a2,float b2,float det2)
{
      float res2;
      
      res2=(-b2-sqrt(det2))/(2*a2);
      return res2;
}

main()
{
      float a,b,c,det;
      
      printf("Resolucao de uma equacao de 2 grau\n");
      printf("\t aX^2 + bx + c = 0\n");
      
      printf("\nInsira um valor para a:");
      scanf("%f",&a);
      printf("\nInsira um valor para b:");
      scanf("%f",&b);
      printf("\nInsira um valor para c:");
      scanf("%f",&c);
      
      det=pow(b,2)-4*a*c;
      
      printf("\n x1 = %.2f\n",x1(a,b,det));
      printf("\n x2 = %.2f\n",x2(a,b,det));
      getch();
}
      
