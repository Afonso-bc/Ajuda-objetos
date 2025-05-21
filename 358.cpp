#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class venda {
	float valor;
public:
	void atribui(float v) {valor = v;}
		void escreve() { cout << valor << '\n';}
};
void valor_venda (venda v)
{
	v.escreve(); //escreve 10
	v.atribui(20); //alteração só local
	v.escreve(); //escreve 20
}
int main()
{
	venda v1;
	v1.atribui(10);
	//atrubui 10 a valor de v1
	valor_venda(v1);
	//passa v1 para a função
	v1.escreve();
	//escreve 10
}