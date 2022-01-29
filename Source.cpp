#include <iostream>
#include <math.h>
using namespace std;

double pr(int); // без рекурсии
double prr(int); // с рекурсией
int main() {

	int n;
	cout << "Vvedite n " << endl; cin >> n;
	cout << "p (ne rekurs) = " << pr(n) << endl;
	cout << "p (rekurs) = " << prr(n) << endl;
	return 0;
}

double pr(int n)
{
	int i; double c = 2, z = 1, k, p = 1;
	for (i = 0; i < n; i++)
	{
		p *= (c / z);
		if (i % 2) c += 2;
		else z += 2;
	}
	return p;
}

double prr(int n)
{
	int i; double c = 2, z = 1, k, p = 1;
	if (n == 1) return 2;
	else
		if (n % 2)
			return (n + 1) * prr(n - 1) / n;
		else
			return n * prr(n - 1) / (n + 1);
}