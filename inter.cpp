#include<stdio.h>
#include<stdlib.h>
float x1(float a1, float b1, float det1)
{
      res1=(-b1+sqrt(de+1))/(2*a1);
      return res1;
      }
      
      float x2(float a2, float b2, float det2)
      {
            float res2;
            res2=(-b2-sqrt(det2))/(2*a2);
            return res2;
            }
main()
{
      float a,b,c,det;
      printf("\n Resolução de uma equação de 2 graus\n");
      printf("\t ax2 + c = 0\n");
      printf("\n Insira os valores de a,b,c:\n");
      scanf("%f %f %f", &a,&b,&c);
      det=pow(b,2)-4*a*c;
      printf("\n x1=%.2f\n",x1(a,b,det));
      printf("\nx2=%.2f\n",x2(a,b,det));
system("pause");
