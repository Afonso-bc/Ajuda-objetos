#include <stdio.h>
struct dadosaluno
{
	int num;
	char nome[20];
	float idade;
};
int main()
{
	char ficheiro[20];
	FILE* fp;
	struct dadosaluno alunos;
	printf("\nEscreve o nome do ficheiro (ex. ALUNOS.TXT) : ");
	gets(ficheiro);
	if ((fp = fopen(ficheiro, "w")) == NULL)
		printf("\n\nO ficheiro nao pode ser aberto.\n");
	else
	{
	scanf("%d", &alunos.num);
	while (alunos.num != 0)
	{
		printf("\nEscreve nome : ");
		scanf("%s", &alunos.nome);
		printf("\nEscreve a idade : ");
		scanf("%f", &aluno.idade);

		fseek(fp,alunos.num*sizeof(alunos), SEEK_SET);
		fwrite(&aluno, sizeof(alunos), 1, fp);

		printf("\n\nEscreve o numero do aluno: ");
		scanf("%d", &alunos.num);
}
	}
	printf("Carrega uma tecla para terminar!");
	fclose(fp);
}