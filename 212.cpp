//gerar uma string aleatoriamente
#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,n;
	char * buffer;
	srand(time(0));
	
	printf ("Comprimento da string? ");
	scanf ("%d", &n);
	
	buffer = (char*) malloc (n+1);
	if (buffer==NULL) exit (1);
	
	for (i=0; i<n; i++)
	buffer[n]=rand()%26+'a';
	buffer[n]='\0';
	
	printf("Random string: %s\n",buffer);
	free (buffer);
	
	//system("pause");
}
