#include<stdio.h>
#include<stdlib.h>

int Maior(int a,int b)
{
    int result;
    if(a>b)
    {
           result=a;
           return result;
           }
           else
           {
               result=b;
               return result;
               }
               }
               main()
               {
                     int n1,n2;
                     
                     printf("Insira dois numeros inteiros:");
                     scanf("%d %d",&n1,&n2);
                     printf("\nO numero maior e' %d\n\n", Maior(n1,n2));
                     system("pause");
               }
