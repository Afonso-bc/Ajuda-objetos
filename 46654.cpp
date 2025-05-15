#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void calc(int n1,int n2)
{
     int res;
     
     res=n1+n2;
     printf("A soma dos 2 números e' %d\n", res);
     
     printf("O produto dos 2 números e' %d\n", n1*n2);
     }
     
     
     main()
     {
           int num1,num2;

	   setlocale(LC_ALL, "Portuguese");
	   
           printf("\n Insira 2 números para calcular a soma e o produto\n");
           scanf("%d %d",&num1,&num2);
           
           calc(num1,num2);
           
           system("pause");
           }
