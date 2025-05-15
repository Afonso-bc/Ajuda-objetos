#include<stdio.h>
#include<stdlib.h>
void FparaC (float)
{ 
     float c;
     c= 5*(f-32)/9;
     printf("O valor inserido em grau Fahrenheit corresponde a %.1f graus Celsius\n",c);
     }
     void CparaF (float c)
     {
          float f
          f= 9*c/5+32;
          printf("\n O valor inserido em graus celcius corresponde a %.1f graus fahrenheit \n",f);
          }
          main()
          {
                float f,c;
                printf("Insira o valor de temperatura em graus fahrenheit:"); scanf("%f",&f); FparaC(f);
                printf("Insira o valor de temperatura em graus celsius: "); scanf("%f",&c); CparaF(c);
                system("pause");
                }
