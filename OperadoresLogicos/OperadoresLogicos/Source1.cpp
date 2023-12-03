#include <iostream>;
using namespace std;
int main() {
	int n1, n2, n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	if (n1==n2 && n2==n3)
	{
		int op = (n1 + n2)*n3;
		cout << op;

	}
	else
	{
		cout << "nada";
	}
	return 0;
}