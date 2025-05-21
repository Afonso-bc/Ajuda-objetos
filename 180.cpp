#include <stdio.h>
main()

{
	int inteiro;
	int *inteiro_ptr = &inteiro;
	
	double double1;
	double *double ptr = &double1;
	
	printf("Endereço da variariavel 'inteiro'; %d\n", &inteiro);
	printf("Endereço armazenado no ponteiro 'inteiro ptr': %d\n\n", inteiro ptr);
	
	printf("Endereço da variavel 'double1': %d\n", &double1);
	printf("Endereço armazenado no ponteiro 'double_ptr': %d\n\n", double_ptr);
	
	printf("Apos o uso dos ponteiros, vamos aponta-los para NULL\n\n");
	inteiro_ptr = NULL;
	double_ptr = NULL;
	printf("Endereço armazenado no ponteiro'inteiero_ptr': %d\n", inteiro_ptr);
	printf("Endereço armazenado no ponteiro ' double_ptr': %d\n", double_ptr);
	//system("pause");
}
