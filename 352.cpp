#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int main()
{
	class pessoa {
		int idade;
	public:
		char nome[40];
		int ano(int ano_actual)
		{return ano_actual = idade;}
	}p1;
	strcpy(p1.nome, "Ana Cruz");
	//p1.idade = 16; Não aceite
	printf("Nome: %s\n", p1.nome);
	//printf("Idade: %d\n",p1.idade);
	printf("Ano de nascimento: ");
	printf("%d\n", p1.ano(2006)); //Aceite mas dá erro

	system("pause");
}