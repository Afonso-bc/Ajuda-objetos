#include <stdio.h>
#include <stdlib.h>
main ()
{
	typedef struct{
		char nome [40];
		int idade;
	}pessoa;
	
	pessoa p1, p2;
	strcpy(p1.nome, "Ana Cruz");
	p1.idade = 16;
	strcpy(p2.nome, "Eva Silva");
	p2.idade = 17;
	printf("%s\t",p1.nome);
	printf("%d\n",p1.idade);
	printf("%s\t",p2.nome);
	printf("%d\n",p2.idade);
	printf("\n");
	
	pessoa *p;
	
	p = malloc( sizeof (pessoa));
	
	strcpy(p->nome, "Rui Nunes");
	p->idade = 18;
	printf("%s\t",p-> nome);
	printf("%d\n",p-> idade);
	
	printf("\n");
	//system("pause");
}
