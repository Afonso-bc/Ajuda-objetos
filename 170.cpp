#include <stdio.h>
main()
{
	int x, *p;
	x = 4, P= &x;
	printf("O endereço de x: &d\n", &x); //escreve o endereço de x
	printf("O valor de x: %d\n",x); // escreve o valor de x, que é 4
	
	printf("O endereço de p: %d\n", &p); // escreve o endereço de p
	printf("O endereço de x: %d\n", p); //escreve o enderço de x
	printf("O valor de x: %d\n",*p); // escreve o valor de x, que é 4
	system("pause");
}
