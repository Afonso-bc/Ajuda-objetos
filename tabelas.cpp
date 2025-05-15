#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
      int Tab1[8], Tab2[8], Tab3[8], i;
      srand(time(NULL));
      for(i=0; i<=7; i++);
      {
               Tab1[i]=1+rand()%10;
               
               Tab2[i]=1+rand()%10;
               
               Tab3[i]=Tab1[i]+Tab2[i];
               }
               printf("\n\n\tTab1\tTab2\tTab3\n\n");
               for(i=0; i<=7; i++)
               printf("\t%d\t%d\t%d\n",Tab1[i],Tab2[i],Tab3[i]);
               //visualizar a soma do 1ºdominio da Tab1, 4º elemento da Tab2 e o ultimo elemento da Tab3
               printf("\n\n A soma dos 3 elementos indicados e' %d \n", Tab1[0]+Tab2[3]+Tab3[7]);
               system("pause"); 
}
               
      
