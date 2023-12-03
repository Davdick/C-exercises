#include <iostream>;
using namespace std;

int main() {
	int mes, dia;
	cout << "Ingresa mes:";
	cin >> mes;
	cout << "Ingrea dia:";
	cin >> dia;
	if (mes>12 || dia>31)
	{
		cout << "Ingresa valores verdaderos";
	}
	else
	{
		if (mes==12 && dia==25)
		{
			cout << "FELIZ NAVIDAD";
		}
		else {
			cout << "CUALQUIER DIA";
		}
	}
}
