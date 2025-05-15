#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()

{
	int tab1[8],tab2[8],tab3[8],i;

	srand(time(NULL));
	for(i=0;i<=7;i++)
	{
	 tab1[i]=1+rand()%10;
	 tab2[i]=1+rand()%10;
	 tab3[i]=tab1[i]+tab2[i];
	}

	printf("\ttab1\ttab2\ttab3\n");

	for(i=0;i<=7;i++)
	{
	 printf("\t%d\t%d\t%d\n",tab1[i],tab2[i],tab3[i]);
	sleep(1000);
	}

 // Visualizar a soma do 1º elemento da tabela Tab1, do 4º elemento da Tab2 e do último elemento Tab3
	printf("\n\nA soma dos 3 elementos indicados e' %d\n\n",tab1[0]+tab2[3]+tab3[7]);
	getch();
}
