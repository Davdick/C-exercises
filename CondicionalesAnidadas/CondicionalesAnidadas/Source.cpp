#include <iostream>;
using namespace std;
int main() {
	int n1, n2, n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	if (n1>n2)
	{
		if (n2>n3) {
			cout << "Es mayor: ";
			cout << n1;
		}
		else {
			if (n3>n1)
			{
				cout << "Es mayor: ";
				cout << n3;
			}
			else {
				cout << "Es mayor: ";
				cout << n1;
			}
		}
			
	}
	else
	{
		if (n2>n3)
		{
			cout << "el mayor es: ";
			cout << n2;
		}
		else
		{
			cout << "Es mayor: ";
			cout << n3;
		}
	}
	return 0;
	
}