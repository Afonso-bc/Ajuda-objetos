// Le o que foi escrito no ficheiro do programa anterior.
#include <stdio.h>

int main()
{
	FILE* fp;
	int i;
	float f;
	fp = fopen("z:\\teste.TXT", "r");
	fscanf(fp, "%d %f", &i, &f);
	printf("%d\n%.2f\n", i, f);
	fclose(fp);

}