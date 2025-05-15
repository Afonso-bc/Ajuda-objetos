#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
      float ACT[5], soma=0;
      int i;
      
      for(i=0; i<=4; i++)
      {
               printf("Indique a altura do %d.jogador (em metros): ", i+1);
               scanf("%f",&ACT[i]);
               soma=soma+ACT[i];
               }
               printf("\n A media da altura dos 5 jogadores e' %.2f\n",soma/5);
               system("pause");
               }
