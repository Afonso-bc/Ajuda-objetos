#include <stdio.h>
main()
{
	int x[3]={10,20,30};
	int *p=x;
	printf("%d\n",*p++); //escreve 10
	printf("%d\n",*p--); //escreve 20
	printf("%d\n",*(p++)); // escreve 30
	printf("\n\n");
	p=x;
	printf("%d\n",(*p)++); //escreve 10
	printf("%d\n",++*p); //escreve 12
	//system("pause");
}
