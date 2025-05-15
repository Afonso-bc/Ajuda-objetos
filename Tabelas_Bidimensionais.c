#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
      int Mat[3][4],i,j,soma=0;

      srand(time(NULL));

      
    for(j=0;j<=2;j++)
    {
      for(i=0;i<=3;i++)
      {
	Mat[j][i]=1+rand()%10;
      	printf("\t %d",Mat[j][i]);

      	soma=soma+Mat[j][i];
      }
      printf("\n\n");
    }
    printf("%d\n\n",Mat[0][2]);
    printf("A soma dos 12 elementos da tabela e' %d",soma);
    printf("A media dos 12 elementos da tabela e' %.2f",(float)soma/12);

    getch();
}
      
