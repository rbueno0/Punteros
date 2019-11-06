#include <string>
#include <iostream>

using namespace std;

int invertir(int num)
{
	int inverso = 0, cifra;
	while (num!=0)
	{
		cifra = num % 10;
		inverso = inverso * 10 + cifra;
		num = num / 10;
	}
	return inverso;
}

int main()
{
	int num, resultado;
	cout << "Introduce un numero entero: ";
	cin >> num;
	resultado = invertir(num);
	cout << "Numero original: " << num << endl;
	cout << "Numero invertido: " << resultado << endl;
	system("pause");
	return 0;
}
