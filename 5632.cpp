#include<stdio.h>
#include<stdlib.h>
void produto(float x, float y)
{
     printf("o produto dos 2 numeros e' %.1f\n", x*y);
     }
     
     main()
     {
           printf("Insira 2 numeros para calcular o produto:\n");
           scanf("%f %f",&a,&b);
           produto(a,b);
           system("pause"); }
