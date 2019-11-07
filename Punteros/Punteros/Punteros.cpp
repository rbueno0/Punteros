#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	float a, b, c, d;
	int salario, salario1, salario2, salario3;
	a = 8000;
	b = 15000;
	c = 25000;
	d = 20000;
	cout << "ingresa tu salario: ";
	cin >> salario;
	if (salario < a)
	{
		int porc1;
		porc1 = salario * .12;
		salario1 = salario + porc1;
		cout << "tu salario se incremento %12: " << salario1;
	}
	else if (a <= salario || salario <= b)
	{
		int porc2;
		porc2 = salario * .08;
		salario2 = salario + porc2;
		cout << "tu salario se incremento %8: " << salario2;
	}
	else if (b < salario || salario <= d)
	{
		int porc3;
		porc3 = salario * .07;
		salario3 = salario + porc3;
		cout << "tu salario se incremento %7: " << salario3;
	}
	else if (c < salario )
	{
		int porc4;
		porc4 = salario * .06;
		int salario4;
		salario4 = salario + porc4;
		cout << "tu salario se incremento %6: " << salario4;

	}
	cout << endl;
	system("pause");
	return 0;
}
