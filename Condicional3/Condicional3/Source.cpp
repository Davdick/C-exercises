#include <iostream>;
using namespace std;
int main() {
	int n1;
	cout << "Ingresa numero del 1 al 99:";
	cin >> n1;
	if (n1*1>=10)
	{
		cout << "Tiene dos digitos el numero:";
		cout << n1;

	}
	else {
		cout << "Tiene solo un digito: ";
		cout << n1;

	}
	return 0;

}