#include<stdio.h>
#include<stdlib.h>
void triplo(float n) //procedimento(void)
{
     float res;
     res=n*3,
     printf("o triplo do numero e' %f\n",res);
     }
     main()
     {
           float num;   
           printf("insira um numero para calcular o triplo\n");      
           scanf("%f",&num);
           triplo(num);
           system("pause");
           }
           
