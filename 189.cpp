#include <stdio.h>
main()
{
	char *s;
	s = "Hello";
	printf("%s\n",s);
	s = "Hello World";
	printf("%s\n",s);
	while (*s)
	printf("%c\n", *s++);
	//system("pause");
}
