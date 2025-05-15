#include <stdio.h>
#include <stdlib.h>
void troca(int a, int b)
{
     int aux;
     aux=a;
     a=b;
     b=aux;
     
     printf("\n No subprograma: a=%d, b=%d\n",a,b);
     }
     main()
     {
           int a,b;
           printf("Insira valores inteiros para a,b:\n"); scanf("%d %d", &a,&b);
           troca(a,b);
           printf("Outra vez no programa principal: a=%d, b=%d\n",a,b);
           system("pause");
           }
