#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class produto {
	static int nprodutos;
	//var. private static
public:
	char nome[20];
	produto () {nprodutos ++;}
	//construtor
	~produto () {nprodutos ==;}
	//destrutor
	int getnp () (return nprodutos;)
};
int produto ::nprodutos =0;
int main() {
produto p1;
cout << "Produtos: " << p1.getnp() << '\n';
{ //bloco com escopo local
	produto p2;
	cout << "Produtos: " << p2.getnp() << '\n';
} //fim do bloco
cout <<"Produtos: " <<p1.getnp() <<'\n';
produto p3;
cout <<"Produtos: " <<p1.getnp() <<'\n';
cout <<"Produtos: " <<p3.getnp() << '\n';
}