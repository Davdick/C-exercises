#include <iostream>;
using namespace std;

int main() {
	float n1, n2, n3;
	cout << "Ingresa primer nota: ";
	cin >> n1;
	cout << "Ingresa segunda nota: ";
	cin >> n2;
	cout << "Ingresa tercera nota: ";
	cin >> n3;
	float promedio = (n1 + n2 + n3) / 3;
	if (promedio>=7)
	{
		cout << "Aprobado con: ";
		cout << promedio;
	}
	else
	{
		cout << "reprobado con: ";
		cout << promedio;
	}
}