#include <stdio.h>
main()
{
	int x, *p;
	x = 4, P= &x;
	printf("O endere�o de x: &d\n", &x); //escreve o endere�o de x
	printf("O valor de x: %d\n",x); // escreve o valor de x, que � 4
	
	printf("O endere�o de p: %d\n", &p); // escreve o endere�o de p
	printf("O endere�o de x: %d\n", p); //escreve o ender�o de x
	printf("O valor de x: %d\n",*p); // escreve o valor de x, que � 4
	system("pause");
}
