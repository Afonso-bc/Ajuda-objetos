#include <stdio.h>
#include <stdlib.h>
void troca(int *p1, int *p2)
{
     int aux;
     
     aux=*p1;
     *p1=*p2;
     *p2=aux;
     }
     
     
     main()
     {
           int a,b;
           printf("Insira valores inteiros para a,b:\n"); scanf("%d %d", &a,&b);
           troca(&a,&b);
           printf("Outra vez no programa principal: a=%d, b=%d\n",a,b);
           system("pause");
           }
