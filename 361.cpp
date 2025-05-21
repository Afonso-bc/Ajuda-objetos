#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	class pessoa {
	public:
		char nome[40];
		int idade;
	}p1, p2;

	strcpy(p1.nome, "Ana Cruz");
	p1.idade = 16;
	strcpy(p2.nome, "Eva Silva");
	p2.idade = 17;
	cout << p1.nome << '\t';
	cout << p1.idade << '\n';
	cout << p2.nome << '\t';
	cout << p2.idade << '\n';
	cout << '\n';

	pessoa* p;
	p = new pessoa;

	strcpy(p->nome, "Rui Nunes");
	p->idade = 18;
	cout << p->nome << '\t';
	cout << p->idade << "\n\n";
}