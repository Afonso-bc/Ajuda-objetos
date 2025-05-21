#include<stdio.h>
#include<stdlib.h>
main()
{
	char *nome;
	nome= (char *) malloc(21);
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("%s\n", nome);
	
	system("pause");
}
