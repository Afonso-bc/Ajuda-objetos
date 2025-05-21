#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class base {
	int privado;
protected:
	int protegido;
public:
	int publico;
	void setpriv(int i) { privado = i; }
	int getpriv() { return privado; }
};
class deriv1 : public base {
public:
	void setprot(int i) { protegido = i; }
	int getprot() { return protegido; }
};
class deriv2 : protected base {
public:
	void setprot(int i) { protegido = i; }
	int getprot() { return protegido; }
	void setpub(int i) { publico = i; }
	int getpub() { return publico; }
};
int main()
{
	cout << "Classe deriv1: public base \n";
	deriv1 d1;
	d1.setpriv(11);
	d1.setprot(12);
	d1.publico = 13;
	cout << d1.getpriv() << '\n';
	cout << d1.getprot() << '\n';
	cout << d1.publico << '\n';
	cout << "classe deriv2: protected base \n";
	deriv2 d2;
	d2.setprot(22);
	d2.setpub(23);
	cout << d2.getprot() << '\n';
	cout << d2.getpub() << '\n';
}