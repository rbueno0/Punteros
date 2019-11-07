#include <iostream>
#include <string>

using namespace std;

void intercambio(int* x, int* y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a, b;
	cout << "Introduce el primer valor: \n";
	cin >> a;
	cout << "Introduce el segundo valor: \n";
	cin >> b;
	cout << "\n";
	cout << "Valor de a: " << a << " Valor de b: " << b << endl;
	intercambio(&a, &b);
	cout << endl << "despues del intercambio: " << endl << endl;
	cout << "Valor de a: " << a << " Valor de b: " << b << endl;
	system("pause");
	return 0;
}
