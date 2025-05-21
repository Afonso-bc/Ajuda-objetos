//Passagem por referencia (ponteiros)
#include<stdio.h>
#include<stdlib.h>
void escr_str2 (char *s)
{
	printf("%s\n",s);
}

void escr_str3 (char *s)
{
	while (*s)
	printf("%c\n",*s++);
}

main()
{
	char st [] = "Programar em c";
	
	escr_str2 (st);
	printf("\n\n");
	
	escr_str3 (st);
	
	printf("\n");
	system("pause");
}
