#include <iostream>
using namespace std;
class base {
public:
	base() { cout << "Construtor da c1. base. \n"; }
	~base() { cout << "Destrutor da c1. base. \n"; }
};
class deriv : public base {
public:
	deriv()
	{cout << "Construtor da c1. derivada. \n";}
	~deriv()
	{cout << "Destrutor da c1. derivada. \n";}
};
int main()
{
	deriv d;
	//criado um objecto da classe derivada que
	//vai ser destruido com o fim do programa
	return 0;
}