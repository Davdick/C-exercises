#include<iostream>

using namespace std;
int main() {
	int num1, num2, num3, num4, suma, producto;
	cout << "Ingresa numero1: ";
	cin >> num1;
	cout << "Ingresa numero2: ";
	cin >> num2;
	cout << "Ingresa numero3: ";
	cin >> num3;
	cout << "Ingresa numero4: ";
	cin >> num4;
	suma = num1 + num2;
	producto =num3 * num4;
	cout << "La suma de los dos primeros es: ";
	cout << suma;
	cout << "\n";
	cout << "El producto de los dos ultimos es: ";
	cout << producto;
	return 0;

}