#include <stdio.h>
#include <stdlib.h>
main()
{
	char *pas;
	
	pas = (char *) malloc(21*sizeof(char));
	printf("Escreve a pass [ate 20 caracteres]: ");
	gets(pas);
	
	printf("Pass: %s\n", pas);
	printf("Endereco antes da free(): %d\n", &pas);
	
	free(pas);
	
	printf("Endereco depois da free(): %d\n", &pas);
	
	//system("pause");
}
