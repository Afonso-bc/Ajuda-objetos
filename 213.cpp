#include <stdio.h>
#include <stdlib.h>
main()
{
	int i, n;
	float notas [20], soma=0;
	printf("Quantos elementos? (Max. 20): ");
	do
	      scanf("%d",&n);
	      while ((n<0) || (n>20));
	      for(i=0; i <n; i++)
	      {
	      	printf("Nota para indice %d :",i);
	      	scanf("%f", &notas [1]);
	      	soma = soma + notas [1];
            	}
            	if(n>0)
            	printf("Media = %.2f",soma/n);
            	printf("\n");
            	//system("pause");
}
