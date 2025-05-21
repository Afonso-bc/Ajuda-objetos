#include <stdio.h>
main()
{
	int x[3] = {10,11,12};
	printf("%d\n",&x);
	// escreve: 2293508 - o endereço de x
	printf("%d\n",&x[0]);
	// escreve:2293508 - o endereço de x[0]
	printf("%d\n"&x[1]);
	//escreve:2293512 - enderço de x[1]
	printf("%d\n",&x[2]);
	//escreve:2293516 - endereço de x[2]
	printf("%d\n",&x[0]); // escreve 10
	printf("&d\n",*x); //escreve 10
	
	//system("pause");
}
