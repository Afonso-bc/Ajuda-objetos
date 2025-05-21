#include <iostream>
using namespace std;
class venda {
public:
	int valor;
	void atribui(float v) (valor = v;)
		void escreve () { cout << valor << '\t';}
};
int main()
{
	venda* v, * p;
	cout << "Quantos objectos? (p.ex:3)\n";
	int n = 3;
	// cin >> n; //podemos usar esta linha
	v = new venda[n];
	v[0].atribui(10);
	v[0].escreve(); //escreve 10
	p = &v[1];
	p = > escreve(); //escreve 20
	p++;
	p->atribui(30);
	p->escreve(); //escreve 30
	p--;
	p->escreve(); //escreve 20
	v[1].escreve(); //escreve 20
	delete[] v;
	p = new venda[n];
	p[0].atribui(10);
	p[0].escreve(); // escreve 10
}