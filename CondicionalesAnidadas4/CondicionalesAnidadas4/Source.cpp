#include <iostream>;
using namespace std;
int main() {
	int n1, n2;
	cout << "Ingresa cantidad de preguntas:";
	cin >> n1;
	cout << "Ingresa total de respuestas correctas:";
	cin >> n2;
	float porcentaje = (n2 * 100) / n1;
	if (porcentaje >=90)
	{
		cout << "Porcentaje maximo";
	}
	else {
		if (porcentaje>=75)
		{
			cout << "Porcentaje medio";
		}
		else {
			if (porcentaje>=50)
			{
				cout << "Porcentaje regular";
			}
			else {
				cout << "Porcentaje fuera de nivel";
			}
		}
	}
}