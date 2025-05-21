#include<stdio.h>
#include<stdlib.h>
int main()
{
	int count = 0;
	while(count <= 20)
	{
		if(count%2 == 0)
			printf("%d\n",count);
		count++;
	}

	system("pause");
}