#include<iostream>
using namespace std;
class pessoa {
public:
	char nome[40]; int idade;
	pessoa()
		(printf("Nova pessoa. \n"));

	pessoa(char* n, int id = 18)
	{
		strcpy(nome, n); idade = id;
		printf("Nova pessoa: %s\t %d\n", nome, idade);

	}
};

int main()
{
	pessoa p1;
	pessoa p2 ("Ana");
	pessoa p3("Rui", 19);
	system("pause");
}