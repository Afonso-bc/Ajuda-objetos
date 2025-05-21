#include<iostream>
using namespace std;
int main()
{
	class pessoa {
	private:
		int idade;
	public:
		char nome[40];
		void setidade (int i) (idade =1;)
		int getidade () {return idade;}
		int ano(int ano_actual)
			(return ano_actual = idade;)
	} p1;
	strcpy(p1.nome, "Ana Cruz");
	p1.setidade(16);
	//Acede ao campo idade via função
	printf("Nome: %s\t", p1.nome);
	printf("Idade: %d\n", p1.getidade());
	printf("Ano de nascimento: %d\n", p1.ano(2006)); //Funciona
	system("pause");
}