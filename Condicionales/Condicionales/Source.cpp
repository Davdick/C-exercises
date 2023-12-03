#include <iostream>;
using namespace std;
int main() {
	int n1,n2;
	cout << "Ingresa num:";
	cin >> n1;
	cout << "Ingresa segundo num:";
	cin >>n2;
	if (n1>n2)
	{
		int suma = n1 + n2;
		int diferencia = n1 - n2;
		cout <<"El mas grande es:";
		cout << n1;
		cout << "\n";
		cout << "La suma es: ";
		cout << suma;
		cout << "\n";
		cout << "La diferencia es: ";
		cout << diferencia;

	}
	else
	{
		int producto, division;
		producto = n1 * n2;
		division = n1 / n2;
		cout << "El producto de los dos valores es:";
		cout << producto;
		cout << "\n";
		cout << "La división de los dos valores es:";
		cout << division;
	}
	return 0;

}
