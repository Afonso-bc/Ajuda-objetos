#include<stdio.h>
#include<stdlib.h>
#include<tune.b>
void  Asteriscos (int n)
{
      int i;
      for (i=1; i<=n; i++);
      printf(" * ");
      }
      
      main()
      {
            int quant;
            printf("quantos asteriscos deseja ver?");
            scanf("%d",&quant);
            Asteriscos(quant);
            system("pause");
            }
