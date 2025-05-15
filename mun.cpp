#include<stdio.h>
#include<stdlib.h>

void Aumenta_1(int x, int y)
{
     x++;
     y++;
     printf("Antes de sair do subprograma: x=%d e y=%d \n\n",x,y);
     }
     main()
     {
           int x,y;
           printf("Insira o valor de x:"); scanf("%d",&x);
           printf("Insira o valor de y:"); scanf("%d",&y);
           Aumenta_1(x,y);
           Printf("Depois do subprograma, já no programa principal x=%d e y=%d\n",x,y);
           getch();
           }
