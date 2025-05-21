#include <stdio.h>
main()
{
	int i, x[3] = {10,11,12};
	int *p = x;
	for(i = 0; i <3; i++)
	printf("%d\n",*(p+i));
	//system("pause");
}
