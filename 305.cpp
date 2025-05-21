// Le uma varievel do tipo inteiro e outra do tipo
// virgula flutuante e sao gravadas no ficheiro
#include<stdio.h>

int main()
(
	FILE* fp;
int i;
float f;
printf("Escreve um valor inteiro: ");
scanf("%d", &i);
printf("Escreve um valor real: ");
scanf("%f", &f);

fp = fopen("z:\\teste.TXT", "w");
fprintf(fp, "%d %.2f\n", i, f);
fclose(fp);
}