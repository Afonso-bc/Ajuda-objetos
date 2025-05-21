#define _CRT_SECURE_NO_WARNINGS
#include<iostream>;
using namespace std;
int main()
{
	class pessoa {
	public:
		char nome[40];
		int idade;
	}p1;
	strcpy(p1.nome, "Ana Cruz");
	p1.idade = 16;

	printf("Nome: %s\t", p1.nome);
	printf("Idade: %d\n", p1.idade);
	system("pause");
}