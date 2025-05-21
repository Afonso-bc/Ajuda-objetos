#include <stdio.h>
main()
{
	int x[3] = {10,20,30};
	int *p=x;
	p=p+2; // p fica apontar para x[2]= 30
	printf("%d\n",*p++); //escreve 30
	printf("%d\n",*p); //escreve erro!
	//system("pause");
}
