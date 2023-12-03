#include <iostream>;
using namespace std;
int main() {
	int cant;
	float precio;
	cout << "Precio de articulo:";
	cin >> precio;
	cout << "Cantidad de articulo: ";
	cin >> cant;
	int res = precio * cant;
	cout << "El precio total es: ";
	cout << res;
	return 0;

}

