#include <stdio.h>
main()

{
	int inteiro;
	int *inteiro_ptr = &inteiro;
	
	double double1;
	double *double ptr = &double1;
	
	printf("Endere�o da variariavel 'inteiro'; %d\n", &inteiro);
	printf("Endere�o armazenado no ponteiro 'inteiro ptr': %d\n\n", inteiro ptr);
	
	printf("Endere�o da variavel 'double1': %d\n", &double1);
	printf("Endere�o armazenado no ponteiro 'double_ptr': %d\n\n", double_ptr);
	
	printf("Apos o uso dos ponteiros, vamos aponta-los para NULL\n\n");
	inteiro_ptr = NULL;
	double_ptr = NULL;
	printf("Endere�o armazenado no ponteiro'inteiero_ptr': %d\n", inteiro_ptr);
	printf("Endere�o armazenado no ponteiro ' double_ptr': %d\n", double_ptr);
	//system("pause");
}
