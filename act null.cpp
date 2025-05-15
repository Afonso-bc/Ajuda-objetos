#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
 int Mat[3][4],i,j;
 srand(time(NULL));
 for(j=0;j<=2;j++)
 for(i=0;i<=3;i++)
 {
                  Mat[j][i]=1+rand()%10;
                  printf("\t%d",Mat[j][i]);
                  }
                  printf("\n\n");
                     
      system("pause");
      }
