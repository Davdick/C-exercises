#include <iostream>;
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n>=100)
	{
		cout <<"Tiene 3 digitos";
	}
	else
	{
		if (n>=10)
		{
			cout << "Tiene 2 digitos";
		}
		else
		{
			cout << "Tiene 1 digito";
		}
	}
	return 0;
}