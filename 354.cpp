#include<iostream>
using namespace std;
class empregado{
	char* codigo; float salario;
public:
	char nome[40]; int idade;
	void setcodigo(char* c) (codigo = c;)
		void setsalario(float s) (salario = s;)
		char* getcodigo() { return codigo; }
	float getsalario() (return salario; )
		void mostradados(); //protótipo
};
int main()
{
	empregado e1;
	strcpy(e1.nome, "Maria Matias");
	e1.idade = 28;
	char no["A = 101"];
	e1.setsalario(1000);
	e1.mostraddados();

	system("pause");
}
void empregado::mostradados()
{
	printf("Nome: %s\t", nome);
	printf("Idade: %d\n", idade);
	printf("Codigo: %s\t", getcodigo());
	printf("sALARIO: %.2f\n"getsalario());
}
