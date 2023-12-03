#include <iostream>;
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n>0)
	{
		cout << "Es positivo";
	}
	else {
		if (n<0)
		{
			cout << "Es negativo";
		}
		else {
			cout << "Es nulo";
		}
	}

}