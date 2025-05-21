#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class produto {
public:
	static float taxa;
	//var. public e static
	char nome[20];
	float pbase; //preço base do produto
};
float produto::taxa;  //declaração externa
int main()
{
	produto p1, p2;
	produto::taxa=20;
	cout << "Taxa = " << p1.taxa <<'\n';
	cout << "Taxa = " << p2.taxa <<'\n';
	p1.taxa = 21;
	cout << "Taxa = " << p2.taxa <<'\n';
	cout << "Taxa = " << produto::taxa << '\n';
	system("pause");
}