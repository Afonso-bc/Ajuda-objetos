#include <stdio.h>
#include <stdlib.h>
main()
{
	struct pessoa {
		char nome [40];
		int idade;
	}p1, p2;
	
	struct(p1.nome, "Ana Cruz");
	p1.idade = 16;
	struct(p2.nome, "Eva Silva");
	p2.idade = 17;
	printf("%s\t",p1.nome);
	printf("%d\n",p1.idade);
	printf("%s\t",p2.nome);
	printf("%d\n",p2.idade);
	printf("\n");
	//ststem("pause");
}
